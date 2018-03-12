#include "widget.h"
#include "ui_widget.h"

LARGE_INTEGER litmp;
LONGLONG Qpart1, Qpart2, Useingtime;
double dfMinus, dfFreq, dfTime;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    struct timeval tpstart,tpend;
//    float timeuse;
//    gettimeofday(&tpstart,NULL);
    
	connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::Slot_Qvar_Send_Msg);
	connect(ui->pushButton_3, &QPushButton::clicked, this, &Widget::Slot_Point_Send_Msg);
    m_bigValue = new BigValueSend;
    m_bigValue->moveToThread(&m_thread);
    
	connect(this,&Widget::start_send_msg,m_bigValue,&BigValueSend::Slot_Start_Send_Msg);
    connect(m_bigValue,&BigValueSend::signal_send_msg,this,&Widget::Slot_Send_Msg);

	connect(this, &Widget::start_qvar_send_msg, m_bigValue, &BigValueSend::Slot_Start_Qvar_Send_Msg);
	connect(m_bigValue, &BigValueSend::signal_send_qvar_msg, this, &Widget::Slot_Send_Qvar);

	connect(this, &Widget::start_point_send_msg, m_bigValue, &BigValueSend::Slot_Start_Point_Send_Msg);
	connect(m_bigValue, &BigValueSend::signal_send_point_msg, this, &Widget::Slot_Send_Point);

    m_thread.start();
   
//    gettimeofday(&tpend,NULL);
//    timeuse=1000000*(tpend.tv_sec-tpstart.tv_sec) + tpend.tv_usec-tpstart.tv_usec;
//    qDebug() << timeuse << "us";
}

Widget::~Widget()
{
    delete ui;
    m_thread.quit();
    m_thread.wait();
}

void Widget::StartTime()
{
	//获得CPU计时器的时钟频率
	QueryPerformanceFrequency(&litmp);//取得高精度运行计数器的频率f,单位是每秒多少次（n/s），
	dfFreq = (double)litmp.QuadPart;
	QueryPerformanceCounter(&litmp);//取得高精度运行计数器的数值
	Qpart1 = litmp.QuadPart; //开始计时
}

void Widget::EndTime(double &time)
{
	QueryPerformanceCounter(&litmp);//取得高精度运行计数器的数值
	Qpart2 = litmp.QuadPart; //终止计时
	dfMinus = (double)(Qpart2 - Qpart1);//计算计数器值
	dfTime = dfMinus / dfFreq;//获得对应时间，单位为秒,可以乘1000000精确到微秒级（us）
	time = dfTime * 1000000;
}

void Widget::on_pushButton_clicked()
{
    //m_time_count.start();
	StartTime();
    emit start_send_msg();
}

void Widget::Slot_Send_Msg(QList<QVariant> qlist)
{
    //qDebug() << "100000 value is time: " << m_time_count.elapsed() << "ms" << endl;
	qlist;
	double dusetime;
	EndTime(dusetime);
	qDebug() << dusetime << "us";
}

void Widget::Slot_Qvar_Send_Msg()
{
	StartTime();
	start_qvar_send_msg();
}

void Widget::Slot_Point_Send_Msg()
{
	StartTime();
	start_point_send_msg();
}

void Widget::Slot_Send_Qvar(QVariant qvar)
{
	QList<QVariant> qlist = qvar.toList();
	double dusetime;
	EndTime(dusetime);
	qDebug() << dusetime << "us";
}

void Widget::Slot_Send_Point(void *point)
{
	QList<QVariant> * p = (QList<QVariant> *)point;
	double dusetime;
	EndTime(dusetime);
	qDebug() << dusetime << "us";
}
