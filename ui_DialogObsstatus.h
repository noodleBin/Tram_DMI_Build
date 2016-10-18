/********************************************************************************
** Form generated from reading UI file 'DialogObsstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOBSSTATUS_H
#define UI_DIALOGOBSSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogOBSStatus
{
public:
    QFrame *frame;
    QLabel *pic_cpsta;
    QLabel *pic_rrsta;
    QLabel *pic_atpsta;
    QLabel *pic_exit;
    QLabel *pic_elssta;

    void setupUi(QDialog *DialogOBSStatus)
    {
        if (DialogOBSStatus->objectName().isEmpty())
            DialogOBSStatus->setObjectName(QStringLiteral("DialogOBSStatus"));
        DialogOBSStatus->resize(366, 74);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(78, 78, 78, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(117, 117, 117, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(97, 97, 97, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(39, 39, 39, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(52, 52, 52, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        DialogOBSStatus->setPalette(palette);
        frame = new QFrame(DialogOBSStatus);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 8, 357, 61));
        QPalette palette1;
        QBrush brush8(QColor(222, 233, 33, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush9(QColor(233, 234, 40, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(239, 237, 34, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        QBrush brush11(QColor(241, 232, 30, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        QBrush brush12(QColor(229, 220, 24, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush12);
        QBrush brush13(QColor(244, 231, 29, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush13);
        QBrush brush14(QColor(227, 227, 22, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush14);
        frame->setPalette(palette1);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(5);
        frame->setMidLineWidth(9);
        pic_cpsta = new QLabel(frame);
        pic_cpsta->setObjectName(QStringLiteral("pic_cpsta"));
        pic_cpsta->setGeometry(QRect(142, 8, 48, 48));
        pic_cpsta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/CP_Status_OK.png")));
        pic_cpsta->setScaledContents(true);
        pic_cpsta->setWordWrap(false);
        pic_rrsta = new QLabel(frame);
        pic_rrsta->setObjectName(QStringLiteral("pic_rrsta"));
        pic_rrsta->setGeometry(QRect(80, 8, 48, 48));
        pic_rrsta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/RR_Status_OK.png")));
        pic_rrsta->setScaledContents(true);
        pic_rrsta->setWordWrap(false);
        pic_atpsta = new QLabel(frame);
        pic_atpsta->setObjectName(QStringLiteral("pic_atpsta"));
        pic_atpsta->setGeometry(QRect(206, 8, 48, 48));
        pic_atpsta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/ATP_Status_OK.png")));
        pic_atpsta->setScaledContents(true);
        pic_atpsta->setWordWrap(false);
        pic_exit = new QLabel(frame);
        pic_exit->setObjectName(QStringLiteral("pic_exit"));
        pic_exit->setGeometry(QRect(302, 8, 48, 48));
        pic_exit->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Close.png")));
        pic_exit->setScaledContents(true);
        pic_exit->setWordWrap(false);
        pic_elssta = new QLabel(frame);
        pic_elssta->setObjectName(QStringLiteral("pic_elssta"));
        pic_elssta->setGeometry(QRect(18, 8, 48, 48));
        pic_elssta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/ELS_Status_OK.png")));
        pic_elssta->setScaledContents(true);
        pic_elssta->setWordWrap(false);

        retranslateUi(DialogOBSStatus);

        QMetaObject::connectSlotsByName(DialogOBSStatus);
    } // setupUi

    void retranslateUi(QDialog *DialogOBSStatus)
    {
        DialogOBSStatus->setWindowTitle(QApplication::translate("DialogOBSStatus", "Dialog", 0));
        pic_cpsta->setText(QString());
        pic_rrsta->setText(QString());
        pic_atpsta->setText(QString());
        pic_exit->setText(QString());
        pic_elssta->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogOBSStatus: public Ui_DialogOBSStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOBSSTATUS_H
