/********************************************************************************
** Form generated from reading UI file 'DialogTimeupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTIMEUPDATE_H
#define UI_DIALOGTIMEUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTimeUpdate
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTimeEdit *timeEdit;
    QLabel *lbl_time;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ok;
    QPushButton *btn_ok_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateEdit;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *DialogTimeUpdate)
    {
        if (DialogTimeUpdate->objectName().isEmpty())
            DialogTimeUpdate->setObjectName(QStringLiteral("DialogTimeUpdate"));
        DialogTimeUpdate->resize(800, 480);
        widget = new QWidget(DialogTimeUpdate);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(420, 50, 361, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        timeEdit->setFont(font);
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setTimeSpec(Qt::LocalTime);

        verticalLayout->addWidget(timeEdit);

        lbl_time = new QLabel(widget);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(36);
        lbl_time->setFont(font1);
        lbl_time->setFrameShape(QFrame::Box);
        lbl_time->setFrameShadow(QFrame::Sunken);
        lbl_time->setMidLineWidth(1);
        lbl_time->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_time);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        QFont font2;
        font2.setPointSize(26);
        btn_ok->setFont(font2);

        horizontalLayout->addWidget(btn_ok);

        btn_ok_2 = new QPushButton(widget);
        btn_ok_2->setObjectName(QStringLiteral("btn_ok_2"));
        btn_ok_2->setFont(font2);

        horizontalLayout->addWidget(btn_ok_2);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(DialogTimeUpdate);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 50, 362, 371));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setProperty("showGroupSeparator", QVariant(false));

        verticalLayout_2->addWidget(dateEdit);

        calendarWidget = new QCalendarWidget(widget1);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        calendarWidget->setFont(font3);
        calendarWidget->setGridVisible(false);

        verticalLayout_2->addWidget(calendarWidget);


        retranslateUi(DialogTimeUpdate);

        QMetaObject::connectSlotsByName(DialogTimeUpdate);
    } // setupUi

    void retranslateUi(QDialog *DialogTimeUpdate)
    {
        DialogTimeUpdate->setWindowTitle(QApplication::translate("DialogTimeUpdate", "Dialog", 0));
        timeEdit->setDisplayFormat(QApplication::translate("DialogTimeUpdate", "HH:mm:ss", 0));
        lbl_time->setText(QApplication::translate("DialogTimeUpdate", "15:00:11", 0));
        btn_ok->setText(QApplication::translate("DialogTimeUpdate", "OK", 0));
        btn_ok_2->setText(QApplication::translate("DialogTimeUpdate", "Cancel", 0));
        dateEdit->setDisplayFormat(QApplication::translate("DialogTimeUpdate", "yyyy/MM/dd", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTimeUpdate: public Ui_DialogTimeUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTIMEUPDATE_H
