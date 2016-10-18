/********************************************************************************
** Form generated from reading UI file 'DialogTimeshift.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTIMESHIFT_H
#define UI_DIALOGTIMESHIFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogtimeshift
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_servicenametitle;
    QLabel *lbl_service;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_desnametitle;
    QLabel *lbl_des;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_delaynametitle;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_delayname;
    QLabel *lbl_delay;
    QLabel *lbl_delayunit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btn_timeshift;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Dialogtimeshift)
    {
        if (Dialogtimeshift->objectName().isEmpty())
            Dialogtimeshift->setObjectName(QStringLiteral("Dialogtimeshift"));
        Dialogtimeshift->resize(800, 480);
        widget = new QWidget(Dialogtimeshift);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 40, 391, 391));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbl_servicenametitle = new QLabel(widget);
        lbl_servicenametitle->setObjectName(QStringLiteral("lbl_servicenametitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        lbl_servicenametitle->setFont(font);
        lbl_servicenametitle->setScaledContents(false);

        verticalLayout->addWidget(lbl_servicenametitle);

        lbl_service = new QLabel(widget);
        lbl_service->setObjectName(QStringLiteral("lbl_service"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbl_service->setPalette(palette);
        lbl_service->setFont(font);
        lbl_service->setScaledContents(false);

        verticalLayout->addWidget(lbl_service);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbl_desnametitle = new QLabel(widget);
        lbl_desnametitle->setObjectName(QStringLiteral("lbl_desnametitle"));
        lbl_desnametitle->setFont(font);
        lbl_desnametitle->setScaledContents(false);

        verticalLayout_2->addWidget(lbl_desnametitle);

        lbl_des = new QLabel(widget);
        lbl_des->setObjectName(QStringLiteral("lbl_des"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbl_des->setPalette(palette1);
        lbl_des->setFont(font);
        lbl_des->setScaledContents(false);

        verticalLayout_2->addWidget(lbl_des);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbl_delaynametitle = new QLabel(widget);
        lbl_delaynametitle->setObjectName(QStringLiteral("lbl_delaynametitle"));
        lbl_delaynametitle->setFont(font);
        lbl_delaynametitle->setScaledContents(false);

        verticalLayout_3->addWidget(lbl_delaynametitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbl_delayname = new QLabel(widget);
        lbl_delayname->setObjectName(QStringLiteral("lbl_delayname"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbl_delayname->setPalette(palette2);
        lbl_delayname->setFont(font);
        lbl_delayname->setScaledContents(false);

        horizontalLayout->addWidget(lbl_delayname);

        lbl_delay = new QLabel(widget);
        lbl_delay->setObjectName(QStringLiteral("lbl_delay"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbl_delay->setPalette(palette3);
        lbl_delay->setFont(font);
        lbl_delay->setScaledContents(false);

        horizontalLayout->addWidget(lbl_delay);

        lbl_delayunit = new QLabel(widget);
        lbl_delayunit->setObjectName(QStringLiteral("lbl_delayunit"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbl_delayunit->setPalette(palette4);
        lbl_delayunit->setFont(font);
        lbl_delayunit->setScaledContents(false);

        horizontalLayout->addWidget(lbl_delayunit);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        widget1 = new QWidget(Dialogtimeshift);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(490, 150, 251, 181));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btn_timeshift = new QPushButton(widget1);
        btn_timeshift->setObjectName(QStringLiteral("btn_timeshift"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
        btn_timeshift->setFont(font1);

        verticalLayout_5->addWidget(btn_timeshift);

        btn_cancel = new QPushButton(widget1);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setFont(font1);

        verticalLayout_5->addWidget(btn_cancel);


        retranslateUi(Dialogtimeshift);

        QMetaObject::connectSlotsByName(Dialogtimeshift);
    } // setupUi

    void retranslateUi(QDialog *Dialogtimeshift)
    {
        Dialogtimeshift->setWindowTitle(QApplication::translate("Dialogtimeshift", "Dialog", 0));
        lbl_servicenametitle->setText(QApplication::translate("Dialogtimeshift", "\345\275\223\345\211\215\350\275\246\346\254\241\345\217\267\357\274\232", 0));
        lbl_service->setText(QApplication::translate("Dialogtimeshift", "T3025", 0));
        lbl_desnametitle->setText(QApplication::translate("Dialogtimeshift", "\347\273\210\347\202\271\347\253\231\357\274\232", 0));
        lbl_des->setText(QApplication::translate("Dialogtimeshift", "\346\210\220\351\203\275\347\201\253\350\275\246\345\215\227\347\253\231", 0));
        lbl_delaynametitle->setText(QApplication::translate("Dialogtimeshift", "\345\275\223\345\211\215\346\227\251\346\231\232\347\202\271\357\274\232", 0));
        lbl_delayname->setText(QApplication::translate("Dialogtimeshift", "\346\231\232\347\202\271", 0));
        lbl_delay->setText(QApplication::translate("Dialogtimeshift", "35", 0));
        lbl_delayunit->setText(QApplication::translate("Dialogtimeshift", "\347\247\222", 0));
        btn_timeshift->setText(QApplication::translate("Dialogtimeshift", "\345\271\263\347\247\273\346\227\266\351\227\264\350\257\267\346\261\202", 0));
        btn_cancel->setText(QApplication::translate("Dialogtimeshift", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogtimeshift: public Ui_Dialogtimeshift {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTIMESHIFT_H
