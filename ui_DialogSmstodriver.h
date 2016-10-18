/********************************************************************************
** Form generated from reading UI file 'DialogSmstodriver.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSMSTODRIVER_H
#define UI_DIALOGSMSTODRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSMSToDriver
{
public:
    QComboBox *combox_sms;
    QComboBox *combox_smssource;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_previous;
    QPushButton *btn_next;
    QPushButton *btn_return;

    void setupUi(QDialog *DialogSMSToDriver)
    {
        if (DialogSMSToDriver->objectName().isEmpty())
            DialogSMSToDriver->setObjectName(QStringLiteral("DialogSMSToDriver"));
        DialogSMSToDriver->resize(800, 480);
        combox_sms = new QComboBox(DialogSMSToDriver);
        combox_sms->setObjectName(QStringLiteral("combox_sms"));
        combox_sms->setGeometry(QRect(164, 46, 631, 38));
        QFont font;
        font.setPointSize(18);
        combox_sms->setFont(font);
        combox_smssource = new QComboBox(DialogSMSToDriver);
        combox_smssource->setObjectName(QStringLiteral("combox_smssource"));
        combox_smssource->setGeometry(QRect(8, 46, 155, 38));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combox_smssource->sizePolicy().hasHeightForWidth());
        combox_smssource->setSizePolicy(sizePolicy);
        combox_smssource->setFont(font);
        combox_smssource->setLayoutDirection(Qt::LeftToRight);
        combox_smssource->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        label = new QLabel(DialogSMSToDriver);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(362, 10, 225, 25));
        label->setFont(font);
        textEdit = new QTextEdit(DialogSMSToDriver);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 86, 783, 329));
        QPalette palette;
        QBrush brush(QColor(170, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(85, 255, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        textEdit->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        textEdit->setFont(font1);
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        widget = new QWidget(DialogSMSToDriver);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(118, 428, 529, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_previous = new QPushButton(widget);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        QFont font2;
        font2.setPointSize(16);
        btn_previous->setFont(font2);

        horizontalLayout->addWidget(btn_previous);

        btn_next = new QPushButton(widget);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setFont(font2);

        horizontalLayout->addWidget(btn_next);

        btn_return = new QPushButton(widget);
        btn_return->setObjectName(QStringLiteral("btn_return"));
        btn_return->setFont(font2);

        horizontalLayout->addWidget(btn_return);


        retranslateUi(DialogSMSToDriver);

        QMetaObject::connectSlotsByName(DialogSMSToDriver);
    } // setupUi

    void retranslateUi(QDialog *DialogSMSToDriver)
    {
        DialogSMSToDriver->setWindowTitle(QApplication::translate("DialogSMSToDriver", "Dialog", 0));
        label->setText(QApplication::translate("DialogSMSToDriver", "\344\277\241\346\201\257\346\237\245\351\230\205", 0));
        btn_previous->setText(QApplication::translate("DialogSMSToDriver", "\344\270\212\351\241\265", 0));
        btn_next->setText(QApplication::translate("DialogSMSToDriver", "\344\270\213\351\241\265", 0));
        btn_return->setText(QApplication::translate("DialogSMSToDriver", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogSMSToDriver: public Ui_DialogSMSToDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSMSTODRIVER_H
