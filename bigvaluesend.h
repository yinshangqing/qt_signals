#ifndef BIGVALUESEND_H
#define BIGVALUESEND_H

#include <QObject>
#include <QDebug>
#include <QList>
#include <QVariant>
#include <QTime>
#include <QTimer>

class BigValueSend : public QObject
{
    Q_OBJECT
public:
    explicit BigValueSend(QObject *parent = nullptr);
    ~BigValueSend();

	QList<QVariant> m_qlist_send;

signals:

    void signal_send_msg(QList<QVariant>);
	void signal_send_qvar_msg(QVariant);
	void signal_send_point_msg(void *);

public slots:

    void Slot_Start_Send_Msg();
	
	void Slot_Start_Qvar_Send_Msg();

	void Slot_Start_Point_Send_Msg();

private:
    
};

#endif // BIGVALUESEND_H
