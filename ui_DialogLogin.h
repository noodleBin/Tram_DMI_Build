/********************************************************************************
** Form generated from reading UI file 'DialogLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QFrame *frame;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_back;
    QPushButton *btn_clear;
    QPushButton *btn_4;
    QPushButton *btn_6;
    QPushButton *btn_5;
    QPushButton *btn_2;
    QPushButton *btn_1;
    QPushButton *btn_3;
    QPushButton *btn_ok;
    QPushButton *btn_dot;
    QPushButton *btn_0;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_tripidname;
    QLabel *lbl_tripid;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_pathidname;
    QLabel *lbl_pathid;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_tripidname_2;
    QLabel *lbl_lineid;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_pathidname_2;
    QLabel *lbl_physicaltrainid;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_driverid;
    QLineEdit *lineEdit_driverID;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_password;
    QLineEdit *lineEdit_driverpassword;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_login;
    QPushButton *btn_cancel;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(800, 480);
        frame = new QFrame(DialogLogin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 801, 481));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame->setPalette(palette);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        btn_7 = new QPushButton(frame);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(395, 50, 80, 80));
        QFont font;
        font.setPointSize(26);
        btn_7->setFont(font);
        btn_8 = new QPushButton(frame);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(490, 50, 80, 80));
        btn_8->setFont(font);
        btn_9 = new QPushButton(frame);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(585, 50, 80, 80));
        btn_9->setFont(font);
        btn_back = new QPushButton(frame);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setGeometry(QRect(680, 50, 80, 80));
        btn_back->setFont(font);
        btn_clear = new QPushButton(frame);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(680, 145, 80, 80));
        btn_clear->setFont(font);
        btn_4 = new QPushButton(frame);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(395, 145, 80, 80));
        btn_4->setFont(font);
        btn_6 = new QPushButton(frame);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(585, 145, 80, 80));
        btn_6->setFont(font);
        btn_5 = new QPushButton(frame);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(490, 145, 80, 80));
        btn_5->setFont(font);
        btn_2 = new QPushButton(frame);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(490, 240, 80, 80));
        btn_2->setFont(font);
        btn_1 = new QPushButton(frame);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(395, 240, 80, 80));
        btn_1->setFont(font);
        btn_3 = new QPushButton(frame);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(585, 240, 80, 80));
        btn_3->setFont(font);
        btn_ok = new QPushButton(frame);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(680, 240, 80, 175));
        btn_ok->setFont(font);
        btn_dot = new QPushButton(frame);
        btn_dot->setObjectName(QStringLiteral("btn_dot"));
        btn_dot->setGeometry(QRect(585, 335, 80, 80));
        btn_dot->setFont(font);
        btn_0 = new QPushButton(frame);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(395, 335, 175, 80));
        btn_0->setFont(font);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(28, 48, 171, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_tripidname = new QLabel(layoutWidget);
        lbl_tripidname->setObjectName(QStringLiteral("lbl_tripidname"));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans"));
        font1.setPointSize(18);
        lbl_tripidname->setFont(font1);
        lbl_tripidname->setScaledContents(false);

        horizontalLayout->addWidget(lbl_tripidname);

        lbl_tripid = new QLabel(layoutWidget);
        lbl_tripid->setObjectName(QStringLiteral("lbl_tripid"));
        lbl_tripid->setFont(font1);
        lbl_tripid->setScaledContents(false);

        horizontalLayout->addWidget(lbl_tripid);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(208, 48, 161, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_pathidname = new QLabel(layoutWidget1);
        lbl_pathidname->setObjectName(QStringLiteral("lbl_pathidname"));
        lbl_pathidname->setFont(font1);
        lbl_pathidname->setScaledContents(false);

        horizontalLayout_2->addWidget(lbl_pathidname);

        lbl_pathid = new QLabel(layoutWidget1);
        lbl_pathid->setObjectName(QStringLiteral("lbl_pathid"));
        lbl_pathid->setFont(font1);
        lbl_pathid->setScaledContents(false);

        horizontalLayout_2->addWidget(lbl_pathid);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(28, 94, 171, 35));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_tripidname_2 = new QLabel(layoutWidget2);
        lbl_tripidname_2->setObjectName(QStringLiteral("lbl_tripidname_2"));
        lbl_tripidname_2->setFont(font1);
        lbl_tripidname_2->setScaledContents(false);

        horizontalLayout_3->addWidget(lbl_tripidname_2);

        lbl_lineid = new QLabel(layoutWidget2);
        lbl_lineid->setObjectName(QStringLiteral("lbl_lineid"));
        lbl_lineid->setFont(font1);
        lbl_lineid->setScaledContents(false);

        horizontalLayout_3->addWidget(lbl_lineid);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(208, 94, 161, 35));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_pathidname_2 = new QLabel(layoutWidget3);
        lbl_pathidname_2->setObjectName(QStringLiteral("lbl_pathidname_2"));
        lbl_pathidname_2->setFont(font1);
        lbl_pathidname_2->setScaledContents(false);

        horizontalLayout_4->addWidget(lbl_pathidname_2);

        lbl_physicaltrainid = new QLabel(layoutWidget3);
        lbl_physicaltrainid->setObjectName(QStringLiteral("lbl_physicaltrainid"));
        lbl_physicaltrainid->setFont(font1);
        lbl_physicaltrainid->setScaledContents(false);

        horizontalLayout_4->addWidget(lbl_physicaltrainid);

        layoutWidget4 = new QWidget(frame);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 150, 341, 36));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbl_driverid = new QLabel(layoutWidget4);
        lbl_driverid->setObjectName(QStringLiteral("lbl_driverid"));
        lbl_driverid->setFont(font1);
        lbl_driverid->setScaledContents(false);

        horizontalLayout_5->addWidget(lbl_driverid);

        lineEdit_driverID = new QLineEdit(layoutWidget4);
        lineEdit_driverID->setObjectName(QStringLiteral("lineEdit_driverID"));
        QFont font2;
        font2.setPointSize(16);
        lineEdit_driverID->setFont(font2);
        lineEdit_driverID->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_driverID);

        layoutWidget5 = new QWidget(frame);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(32, 200, 339, 36));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lbl_password = new QLabel(layoutWidget5);
        lbl_password->setObjectName(QStringLiteral("lbl_password"));
        lbl_password->setFont(font1);
        lbl_password->setScaledContents(false);

        horizontalLayout_6->addWidget(lbl_password);

        lineEdit_driverpassword = new QLineEdit(layoutWidget5);
        lineEdit_driverpassword->setObjectName(QStringLiteral("lineEdit_driverpassword"));
        lineEdit_driverpassword->setFont(font2);
        lineEdit_driverpassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lineEdit_driverpassword->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_driverpassword);

        layoutWidget6 = new QWidget(frame);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(90, 270, 171, 138));
        verticalLayout = new QVBoxLayout(layoutWidget6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_login = new QPushButton(layoutWidget6);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setFont(font);

        verticalLayout->addWidget(btn_login);

        btn_cancel = new QPushButton(layoutWidget6);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setFont(font);

        verticalLayout->addWidget(btn_cancel);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", 0));
        btn_7->setText(QApplication::translate("DialogLogin", "7", 0));
        btn_8->setText(QApplication::translate("DialogLogin", "8", 0));
        btn_9->setText(QApplication::translate("DialogLogin", "9", 0));
        btn_back->setText(QApplication::translate("DialogLogin", "\342\206\220", 0));
        btn_clear->setText(QApplication::translate("DialogLogin", "C", 0));
        btn_4->setText(QApplication::translate("DialogLogin", "4", 0));
        btn_6->setText(QApplication::translate("DialogLogin", "6", 0));
        btn_5->setText(QApplication::translate("DialogLogin", "5", 0));
        btn_2->setText(QApplication::translate("DialogLogin", "2", 0));
        btn_1->setText(QApplication::translate("DialogLogin", "1", 0));
        btn_3->setText(QApplication::translate("DialogLogin", "3", 0));
        btn_ok->setText(QApplication::translate("DialogLogin", "\347\241\256\345\256\232", 0));
        btn_dot->setText(QApplication::translate("DialogLogin", ".", 0));
        btn_0->setText(QApplication::translate("DialogLogin", "0", 0));
        lbl_tripidname->setText(QApplication::translate("DialogLogin", "\345\215\225\347\250\213\345\217\267", 0));
        lbl_tripid->setText(QApplication::translate("DialogLogin", "1", 0));
        lbl_pathidname->setText(QApplication::translate("DialogLogin", "\350\267\257\345\276\204\345\217\267", 0));
        lbl_pathid->setText(QApplication::translate("DialogLogin", "2", 0));
        lbl_tripidname_2->setText(QApplication::translate("DialogLogin", "\347\272\277\350\267\257\345\217\267", 0));
        lbl_lineid->setText(QApplication::translate("DialogLogin", "1", 0));
        lbl_pathidname_2->setText(QApplication::translate("DialogLogin", "\345\210\227\350\275\246\345\217\267", 0));
        lbl_physicaltrainid->setText(QApplication::translate("DialogLogin", "7", 0));
        lbl_driverid->setText(QApplication::translate("DialogLogin", "\345\217\270\346\234\272\345\217\267", 0));
        lbl_password->setText(QApplication::translate("DialogLogin", "\345\257\206   \347\240\201", 0));
        btn_login->setText(QApplication::translate("DialogLogin", "\347\231\273\345\275\225", 0));
        btn_cancel->setText(QApplication::translate("DialogLogin", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
