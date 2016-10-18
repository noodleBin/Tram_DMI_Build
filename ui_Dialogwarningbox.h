/********************************************************************************
** Form generated from reading UI file 'Dialogwarningbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWARNINGBOX_H
#define UI_DIALOGWARNINGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogWarningbox
{
public:
    QPushButton *btn_ok;
    QLabel *lbl_logo;
    QLabel *label;

    void setupUi(QDialog *DialogWarningbox)
    {
        if (DialogWarningbox->objectName().isEmpty())
            DialogWarningbox->setObjectName(QStringLiteral("DialogWarningbox"));
        DialogWarningbox->resize(573, 320);
        btn_ok = new QPushButton(DialogWarningbox);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(454, 54, 103, 47));
        QFont font;
        font.setPointSize(16);
        btn_ok->setFont(font);
        lbl_logo = new QLabel(DialogWarningbox);
        lbl_logo->setObjectName(QStringLiteral("lbl_logo"));
        lbl_logo->setGeometry(QRect(14, 14, 200, 87));
        lbl_logo->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Casco_Logo_300.png")));
        lbl_logo->setScaledContents(true);
        label = new QLabel(DialogWarningbox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(114, 136, 355, 137));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        retranslateUi(DialogWarningbox);

        QMetaObject::connectSlotsByName(DialogWarningbox);
    } // setupUi

    void retranslateUi(QDialog *DialogWarningbox)
    {
        DialogWarningbox->setWindowTitle(QApplication::translate("DialogWarningbox", "Dialog", 0));
        btn_ok->setText(QApplication::translate("DialogWarningbox", "\345\205\263\351\227\255", 0));
        lbl_logo->setText(QString());
        label->setText(QApplication::translate("DialogWarningbox", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogWarningbox: public Ui_DialogWarningbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWARNINGBOX_H
