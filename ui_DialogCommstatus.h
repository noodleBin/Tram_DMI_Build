/********************************************************************************
** Form generated from reading UI file 'DialogCommstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOMMSTATUS_H
#define UI_DIALOGCOMMSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogCommstatus
{
public:
    QFrame *frame;
    QLabel *pic_radiostatus;
    QLabel *pic_gpssta;
    QLabel *pic_exit;
    QLabel *pic_dmselssta;
    QLabel *pic_radiocover;

    void setupUi(QDialog *DialogCommstatus)
    {
        if (DialogCommstatus->objectName().isEmpty())
            DialogCommstatus->setObjectName(QStringLiteral("DialogCommstatus"));
        DialogCommstatus->resize(366, 74);
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
        DialogCommstatus->setPalette(palette);
        frame = new QFrame(DialogCommstatus);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 6, 357, 61));
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
        pic_radiostatus = new QLabel(frame);
        pic_radiostatus->setObjectName(QStringLiteral("pic_radiostatus"));
        pic_radiostatus->setGeometry(QRect(74, 8, 48, 48));
        pic_radiostatus->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Wifi_OK.png")));
        pic_radiostatus->setScaledContents(true);
        pic_radiostatus->setWordWrap(false);
        pic_gpssta = new QLabel(frame);
        pic_gpssta->setObjectName(QStringLiteral("pic_gpssta"));
        pic_gpssta->setGeometry(QRect(200, 8, 48, 48));
        pic_gpssta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/GPS_OK.png")));
        pic_gpssta->setScaledContents(true);
        pic_gpssta->setWordWrap(false);
        pic_exit = new QLabel(frame);
        pic_exit->setObjectName(QStringLiteral("pic_exit"));
        pic_exit->setGeometry(QRect(296, 8, 48, 48));
        pic_exit->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Close.png")));
        pic_exit->setScaledContents(true);
        pic_exit->setWordWrap(false);
        pic_dmselssta = new QLabel(frame);
        pic_dmselssta->setObjectName(QStringLiteral("pic_dmselssta"));
        pic_dmselssta->setGeometry(QRect(12, 8, 48, 48));
        pic_dmselssta->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Communication_ELS_DMS_Status1.png")));
        pic_dmselssta->setScaledContents(true);
        pic_dmselssta->setWordWrap(false);
        pic_radiocover = new QLabel(frame);
        pic_radiocover->setObjectName(QStringLiteral("pic_radiocover"));
        pic_radiocover->setGeometry(QRect(136, 8, 48, 48));
        pic_radiocover->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Comm_Cover_Status0.png")));
        pic_radiocover->setScaledContents(true);
        pic_radiocover->setWordWrap(false);

        retranslateUi(DialogCommstatus);

        QMetaObject::connectSlotsByName(DialogCommstatus);
    } // setupUi

    void retranslateUi(QDialog *DialogCommstatus)
    {
        DialogCommstatus->setWindowTitle(QApplication::translate("DialogCommstatus", "Dialog", 0));
        pic_radiostatus->setText(QString());
        pic_gpssta->setText(QString());
        pic_exit->setText(QString());
        pic_dmselssta->setText(QString());
        pic_radiocover->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogCommstatus: public Ui_DialogCommstatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOMMSTATUS_H
