/********************************************************************************
** Form generated from reading UI file 'DialogElsmodeselection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGELSMODESELECTION_H
#define UI_DIALOGELSMODESELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogELSModeSelection
{
public:
    QRadioButton *radiobtn_automatic;
    QRadioButton *radiobtn_standalone;
    QRadioButton *radiobtn_deadhead;
    QLabel *lblelsmodename;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *DialogELSModeSelection)
    {
        if (DialogELSModeSelection->objectName().isEmpty())
            DialogELSModeSelection->setObjectName(QStringLiteral("DialogELSModeSelection"));
        DialogELSModeSelection->resize(800, 480);
        radiobtn_automatic = new QRadioButton(DialogELSModeSelection);
        radiobtn_automatic->setObjectName(QStringLiteral("radiobtn_automatic"));
        radiobtn_automatic->setGeometry(QRect(100, 138, 231, 57));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        radiobtn_automatic->setFont(font);
        radiobtn_automatic->setChecked(true);
        radiobtn_standalone = new QRadioButton(DialogELSModeSelection);
        radiobtn_standalone->setObjectName(QStringLiteral("radiobtn_standalone"));
        radiobtn_standalone->setGeometry(QRect(100, 248, 227, 39));
        radiobtn_standalone->setFont(font);
        radiobtn_deadhead = new QRadioButton(DialogELSModeSelection);
        radiobtn_deadhead->setObjectName(QStringLiteral("radiobtn_deadhead"));
        radiobtn_deadhead->setGeometry(QRect(100, 340, 241, 61));
        radiobtn_deadhead->setFont(font);
        lblelsmodename = new QLabel(DialogELSModeSelection);
        lblelsmodename->setObjectName(QStringLiteral("lblelsmodename"));
        lblelsmodename->setGeometry(QRect(88, 46, 193, 61));
        lblelsmodename->setFont(font);
        btn_ok = new QPushButton(DialogELSModeSelection);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(580, 240, 119, 59));
        btn_ok->setFont(font);
        btn_cancel = new QPushButton(DialogELSModeSelection);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(580, 320, 119, 59));
        btn_cancel->setFont(font);

        retranslateUi(DialogELSModeSelection);

        QMetaObject::connectSlotsByName(DialogELSModeSelection);
    } // setupUi

    void retranslateUi(QDialog *DialogELSModeSelection)
    {
        DialogELSModeSelection->setWindowTitle(QApplication::translate("DialogELSModeSelection", "Dialog", 0));
        radiobtn_automatic->setText(QApplication::translate("DialogELSModeSelection", "    \350\275\246\350\275\275\350\201\224\346\234\272", 0));
        radiobtn_standalone->setText(QApplication::translate("DialogELSModeSelection", "    \350\275\246\350\275\275\347\213\254\347\253\213", 0));
        radiobtn_deadhead->setText(QApplication::translate("DialogELSModeSelection", "    \346\211\213\345\267\245\346\216\247\345\210\266", 0));
        lblelsmodename->setText(QApplication::translate("DialogELSModeSelection", "\350\275\246\350\275\275\350\277\220\350\241\214\346\250\241\345\274\217", 0));
        btn_ok->setText(QApplication::translate("DialogELSModeSelection", "\347\241\256\345\256\232", 0));
        btn_cancel->setText(QApplication::translate("DialogELSModeSelection", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogELSModeSelection: public Ui_DialogELSModeSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGELSMODESELECTION_H
