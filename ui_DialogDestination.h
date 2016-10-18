/********************************************************************************
** Form generated from reading UI file 'DialogDestination.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDESTINATION_H
#define UI_DIALOGDESTINATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDestination
{
public:
    QPushButton *btn_OK;
    QLabel *lbl_dialogdesname;
    QComboBox *cmb_desorpath;
    QPushButton *btn_cancel;
    QComboBox *combox_des;

    void setupUi(QDialog *DialogDestination)
    {
        if (DialogDestination->objectName().isEmpty())
            DialogDestination->setObjectName(QStringLiteral("DialogDestination"));
        DialogDestination->resize(800, 480);
        btn_OK = new QPushButton(DialogDestination);
        btn_OK->setObjectName(QStringLiteral("btn_OK"));
        btn_OK->setGeometry(QRect(442, 326, 130, 73));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        btn_OK->setFont(font);
        lbl_dialogdesname = new QLabel(DialogDestination);
        lbl_dialogdesname->setObjectName(QStringLiteral("lbl_dialogdesname"));
        lbl_dialogdesname->setGeometry(QRect(80, 38, 623, 43));
        QFont font1;
        font1.setPointSize(18);
        lbl_dialogdesname->setFont(font1);
        lbl_dialogdesname->setAlignment(Qt::AlignCenter);
        cmb_desorpath = new QComboBox(DialogDestination);
        cmb_desorpath->setObjectName(QStringLiteral("cmb_desorpath"));
        cmb_desorpath->setGeometry(QRect(98, 178, 135, 38));
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
        cmb_desorpath->setPalette(palette);
        cmb_desorpath->setFont(font1);
        cmb_desorpath->setAutoFillBackground(true);
        cmb_desorpath->setEditable(false);
        btn_cancel = new QPushButton(DialogDestination);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(584, 326, 130, 73));
        btn_cancel->setFont(font);
        combox_des = new QComboBox(DialogDestination);
        combox_des->setObjectName(QStringLiteral("combox_des"));
        combox_des->setGeometry(QRect(248, 178, 469, 38));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        combox_des->setPalette(palette1);
        combox_des->setFont(font1);
        combox_des->setAutoFillBackground(true);
        combox_des->setEditable(false);

        retranslateUi(DialogDestination);

        cmb_desorpath->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogDestination);
    } // setupUi

    void retranslateUi(QDialog *DialogDestination)
    {
        DialogDestination->setWindowTitle(QApplication::translate("DialogDestination", "Dialog", 0));
        btn_OK->setText(QApplication::translate("DialogDestination", "\347\241\256\345\256\232", 0));
        lbl_dialogdesname->setText(QApplication::translate("DialogDestination", "\345\217\257\351\200\211\347\232\204\347\273\210\347\202\271\347\253\231\357\274\214\350\267\257\345\276\204\345\217\267", 0));
        cmb_desorpath->clear();
        cmb_desorpath->insertItems(0, QStringList()
         << QApplication::translate("DialogDestination", "\347\273\210\347\202\271\347\253\231", 0)
         << QApplication::translate("DialogDestination", "\350\267\257\345\276\204\345\217\267", 0)
        );
        btn_cancel->setText(QApplication::translate("DialogDestination", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogDestination: public Ui_DialogDestination {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDESTINATION_H
