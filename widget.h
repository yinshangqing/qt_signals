#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "bigvaluesend.h"
#include <QThread>
#include <QDebug>
#include <QTime>
#include <QList>
#include <QVariant>
#include <QDebug>
//#include <sys/time.h>
#include <windows.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

	void StartTime();

	void EndTime(double &time);

private slots:
    void on_pushButton_clicked();

    void Slot_Send_Msg(QList<QVariant>);
//    void signal_send_msg(QList<QVariant>);
	void Slot_Qvar_Send_Msg();

	void Slot_Point_Send_Msg();

	void Slot_Send_Qvar(QVariant);

	void Slot_Send_Point(void *);

signals:
    void start_send_msg();

	void start_qvar_send_msg();

	void start_point_send_msg();

private:
    Ui::Widget *ui;
    BigValueSend *m_bigValue;
    QThread m_thread;

    QTime m_time_count;
};

#endif // WIDGET_H
