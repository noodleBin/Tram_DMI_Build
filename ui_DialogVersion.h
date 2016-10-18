/********************************************************************************
** Form generated from reading UI file 'DialogVersion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVERSION_H
#define UI_DIALOGVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogVersion
{
public:
    QLabel *lbl_logo;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *lbl_swname;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblappversionname;
    QLabel *lblappversion;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbldataversionname;
    QLabel *lbldataversion;
    QWidget *tab_2;
    QSlider *volumeslider;
    QLabel *lbl_mute;
    QLabel *lbl_sub_vol;
    QLabel *lbl_add_vol;
    QPushButton *btn_ok;

    void setupUi(QDialog *DialogVersion)
    {
        if (DialogVersion->objectName().isEmpty())
            DialogVersion->setObjectName(QStringLiteral("DialogVersion"));
        DialogVersion->resize(573, 320);
        lbl_logo = new QLabel(DialogVersion);
        lbl_logo->setObjectName(QStringLiteral("lbl_logo"));
        lbl_logo->setGeometry(QRect(10, 10, 200, 87));
        lbl_logo->setPixmap(QPixmap(QString::fromUtf8("../wubin/res/Casco_Logo_300.png")));
        lbl_logo->setScaledContents(true);
        tabWidget = new QTabWidget(DialogVersion);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 114, 557, 201));
        QFont font;
        font.setPointSize(16);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lbl_swname = new QLabel(tab);
        lbl_swname->setObjectName(QStringLiteral("lbl_swname"));
        lbl_swname->setGeometry(QRect(44, -2, 461, 57));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        lbl_swname->setFont(font1);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(104, 70, 281, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblappversionname = new QLabel(layoutWidget);
        lblappversionname->setObjectName(QStringLiteral("lblappversionname"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(16);
        lblappversionname->setFont(font2);

        horizontalLayout->addWidget(lblappversionname);

        lblappversion = new QLabel(layoutWidget);
        lblappversion->setObjectName(QStringLiteral("lblappversion"));
        lblappversion->setFont(font2);

        horizontalLayout->addWidget(lblappversion);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbldataversionname = new QLabel(layoutWidget);
        lbldataversionname->setObjectName(QStringLiteral("lbldataversionname"));
        lbldataversionname->setFont(font2);

        horizontalLayout_2->addWidget(lbldataversionname);

        lbldataversion = new QLabel(layoutWidget);
        lbldataversion->setObjectName(QStringLiteral("lbldataversion"));
        lbldataversion->setFont(font2);

        horizontalLayout_2->addWidget(lbldataversion);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        volumeslider = new QSlider(tab_2);
        volumeslider->setObjectName(QStringLiteral("volumeslider"));
        volumeslider->setGeometry(QRect(80, 48, 309, 65));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volumeslider->sizePolicy().hasHeightForWidth());
        volumeslider->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(55, 55, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(88, 88, 88, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        volumeslider->setPalette(palette);
        QFont font3;
        font3.setUnderline(false);
        volumeslider->setFont(font3);
        volumeslider->setSingleStep(10);
        volumeslider->setValue(99);
        volumeslider->setOrientation(Qt::Horizontal);
        volumeslider->setInvertedAppearance(false);
        volumeslider->setInvertedControls(false);
        volumeslider->setTickPosition(QSlider::TicksBothSides);
        volumeslider->setTickInterval(0);
        lbl_mute = new QLabel(tab_2);
        lbl_mute->setObjectName(QStringLiteral("lbl_mute"));
        lbl_mute->setGeometry(QRect(472, 44, 64, 64));
        lbl_sub_vol = new QLabel(tab_2);
        lbl_sub_vol->setObjectName(QStringLiteral("lbl_sub_vol"));
        lbl_sub_vol->setGeometry(QRect(28, 52, 48, 48));
        lbl_sub_vol->setScaledContents(true);
        lbl_add_vol = new QLabel(tab_2);
        lbl_add_vol->setObjectName(QStringLiteral("lbl_add_vol"));
        lbl_add_vol->setGeometry(QRect(394, 52, 48, 48));
        lbl_add_vol->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        btn_ok = new QPushButton(DialogVersion);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(448, 26, 103, 47));
        btn_ok->setFont(font);

        retranslateUi(DialogVersion);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogVersion);
    } // setupUi

    void retranslateUi(QDialog *DialogVersion)
    {
        DialogVersion->setWindowTitle(QApplication::translate("DialogVersion", "Dialog", 0));
        lbl_logo->setText(QString());
        lbl_swname->setText(QApplication::translate("DialogVersion", "<html><head/><body><p>CASCO \346\234\211\350\275\250\347\224\265\350\275\246 DMI \345\255\220\347\263\273\347\273\237</p></body></html>", 0));
        lblappversionname->setText(QApplication::translate("DialogVersion", "\345\272\224\347\224\250\347\250\213\345\272\217\347\211\210\346\234\254\357\274\232", 0));
        lblappversion->setText(QApplication::translate("DialogVersion", "1.0.0", 0));
        lbldataversionname->setText(QApplication::translate("DialogVersion", "\346\225\260\346\215\256\347\211\210\346\234\254\357\274\232", 0));
        lbldataversion->setText(QApplication::translate("DialogVersion", "1.0.0", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogVersion", "\347\211\210\346\234\254", 0));
        lbl_mute->setText(QApplication::translate("DialogVersion", "TextLabel", 0));
        lbl_sub_vol->setText(QApplication::translate("DialogVersion", "TextLabel", 0));
        lbl_add_vol->setText(QApplication::translate("DialogVersion", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogVersion", "\351\237\263\351\207\217", 0));
        btn_ok->setText(QApplication::translate("DialogVersion", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogVersion: public Ui_DialogVersion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVERSION_H
