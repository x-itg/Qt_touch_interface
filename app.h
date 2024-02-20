#ifndef APP_H
#define APP_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>

class App : public QWidget
{
    Q_OBJECT
public:
    explicit App(QWidget *parent = nullptr);
    explicit App(const QString& name, const QString& url = ":/img/qt.png", QWidget *parent = nullptr);

signals:

private:
    QLabel* m_name;
    QPushButton* m_appBtn;
};

#endif // APP_H