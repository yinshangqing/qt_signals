#include "bigvaluesend.h"

BigValueSend::BigValueSend(QObject *parent)
    : QObject(parent)
{
    QTime time_count;
    time_count.start();
    for(int i=0;i<100000;i++)
    {
        QString str = QString("this is %1 ....................").arg(i);
        m_qlist_send.append(QVariant::fromValue(str));
    }
    qDebug() << "100000 value is time: " << time_count.elapsed() << "ms" << endl;

}

BigValueSend::~BigValueSend()
{

}

void BigValueSend::Slot_Start_Send_Msg()
{
    emit signal_send_msg(m_qlist_send);
}

void BigValueSend::Slot_Start_Qvar_Send_Msg()
{
	QVariant qvar = QVariant::fromValue(m_qlist_send);
	signal_send_qvar_msg(qvar);
}

void BigValueSend::Slot_Start_Point_Send_Msg()
{
	void *point = (void *)&m_qlist_send;
	signal_send_point_msg(point);
}

