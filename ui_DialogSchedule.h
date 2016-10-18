/********************************************************************************
** Form generated from reading UI file 'DialogSchedule.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSCHEDULE_H
#define UI_DIALOGSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSchedule
{
public:
    QFrame *frame;
    QPushButton *btn_cancel;
    QLabel *label;
    QComboBox *cmb_service;
    QComboBox *cmb_schedule;
    QComboBox *cmb_trip;
    QLabel *lbl_schedule;
    QLabel *lbl_service;
    QLabel *lbl_trip;
    QPushButton *btn_sch;
    QPushButton *btn_service;
    QPushButton *btn_servicecancel;
    QPushButton *btn_trip;
    QPushButton *btn_tripcancel;
    QPushButton *btn_schcancel;

    void setupUi(QDialog *DialogSchedule)
    {
        if (DialogSchedule->objectName().isEmpty())
            DialogSchedule->setObjectName(QStringLiteral("DialogSchedule"));
        DialogSchedule->resize(800, 480);
        frame = new QFrame(DialogSchedule);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 2, 793, 473));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 250, 224, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 252, 239, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 125, 112, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 167, 149, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame->setPalette(palette);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        btn_cancel = new QPushButton(frame);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(414, 388, 153, 67));
        QFont font;
        font.setPointSize(26);
        btn_cancel->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(188, 44, 467, 31));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        cmb_service = new QComboBox(frame);
        cmb_service->setObjectName(QStringLiteral("cmb_service"));
        cmb_service->setGeometry(QRect(134, 212, 437, 47));
        cmb_service->setFont(font1);
        cmb_schedule = new QComboBox(frame);
        cmb_schedule->setObjectName(QStringLiteral("cmb_schedule"));
        cmb_schedule->setGeometry(QRect(134, 130, 437, 47));
        cmb_schedule->setFont(font1);
        cmb_trip = new QComboBox(frame);
        cmb_trip->setObjectName(QStringLiteral("cmb_trip"));
        cmb_trip->setGeometry(QRect(134, 294, 437, 47));
        cmb_trip->setFont(font1);
        lbl_schedule = new QLabel(frame);
        lbl_schedule->setObjectName(QStringLiteral("lbl_schedule"));
        lbl_schedule->setGeometry(QRect(34, 134, 85, 37));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(18);
        lbl_schedule->setFont(font2);
        lbl_service = new QLabel(frame);
        lbl_service->setObjectName(QStringLiteral("lbl_service"));
        lbl_service->setGeometry(QRect(34, 214, 85, 37));
        lbl_service->setFont(font2);
        lbl_trip = new QLabel(frame);
        lbl_trip->setObjectName(QStringLiteral("lbl_trip"));
        lbl_trip->setGeometry(QRect(34, 296, 85, 37));
        lbl_trip->setFont(font2);
        btn_sch = new QPushButton(frame);
        btn_sch->setObjectName(QStringLiteral("btn_sch"));
        btn_sch->setGeometry(QRect(592, 132, 87, 45));
        QFont font3;
        font3.setPointSize(20);
        btn_sch->setFont(font3);
        btn_service = new QPushButton(frame);
        btn_service->setObjectName(QStringLiteral("btn_service"));
        btn_service->setGeometry(QRect(592, 214, 87, 45));
        btn_service->setFont(font3);
        btn_servicecancel = new QPushButton(frame);
        btn_servicecancel->setObjectName(QStringLiteral("btn_servicecancel"));
        btn_servicecancel->setGeometry(QRect(690, 214, 87, 45));
        btn_servicecancel->setFont(font3);
        btn_trip = new QPushButton(frame);
        btn_trip->setObjectName(QStringLiteral("btn_trip"));
        btn_trip->setGeometry(QRect(592, 296, 87, 45));
        btn_trip->setFont(font3);
        btn_tripcancel = new QPushButton(frame);
        btn_tripcancel->setObjectName(QStringLiteral("btn_tripcancel"));
        btn_tripcancel->setGeometry(QRect(690, 296, 87, 45));
        btn_tripcancel->setFont(font3);
        btn_schcancel = new QPushButton(frame);
        btn_schcancel->setObjectName(QStringLiteral("btn_schcancel"));
        btn_schcancel->setGeometry(QRect(690, 132, 87, 45));
        btn_schcancel->setFont(font3);

        retranslateUi(DialogSchedule);

        QMetaObject::connectSlotsByName(DialogSchedule);
    } // setupUi

    void retranslateUi(QDialog *DialogSchedule)
    {
        DialogSchedule->setWindowTitle(QApplication::translate("DialogSchedule", "Dialog", 0));
        btn_cancel->setText(QApplication::translate("DialogSchedule", "\345\205\263\351\227\255", 0));
        label->setText(QApplication::translate("DialogSchedule", "\345\217\257\351\200\211\347\232\204\346\211\247\350\241\214\350\256\241\345\210\222\357\274\214 \350\275\246\346\254\241\345\217\267\357\274\214 \345\215\225\347\250\213\345\217\267", 0));
        lbl_schedule->setText(QApplication::translate("DialogSchedule", "\350\256\241\345\210\222", 0));
        lbl_service->setText(QApplication::translate("DialogSchedule", "\350\275\246\346\254\241", 0));
        lbl_trip->setText(QApplication::translate("DialogSchedule", "\345\215\225\347\250\213", 0));
        btn_sch->setText(QApplication::translate("DialogSchedule", "\347\241\256\345\256\232", 0));
        btn_service->setText(QApplication::translate("DialogSchedule", "\347\241\256\345\256\232", 0));
        btn_servicecancel->setText(QApplication::translate("DialogSchedule", "\350\277\224\345\233\236", 0));
        btn_trip->setText(QApplication::translate("DialogSchedule", "\347\241\256\345\256\232", 0));
        btn_tripcancel->setText(QApplication::translate("DialogSchedule", "\350\277\224\345\233\236", 0));
        btn_schcancel->setText(QApplication::translate("DialogSchedule", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogSchedule: public Ui_DialogSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSCHEDULE_H
