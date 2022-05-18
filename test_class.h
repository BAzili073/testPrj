#pragma once
#include <QThread>
#include <QDebug>
#include <QObject>
#include <QString>

class mainClass : QObject
{
  public:
    mainClass();
};

class testClass : public QThread
{
    Q_OBJECT

  public slots:
    void getPong();
  signals:
    void sendPing();

  public:
    testClass();

  protected:
    void run() override;
};
