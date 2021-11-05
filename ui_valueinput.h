/********************************************************************************
** Form generated from reading UI file 'valueinput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUEINPUT_H
#define UI_VALUEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ValueInput
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *SACheck;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *SMCheck;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *cancelChoice;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *chooseTech;
    QSpacerItem *horizontalSpacer_12;
    QWidget *page_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *welcome;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *f_centerIn;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *specCombo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QCheckBox *autoCheckSA;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *gainComboSA;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *plot;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *clearValuesSA;
    QSpacerItem *horizontalSpacer_21;
    QWidget *page_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QLineEdit *startFreq;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_11;
    QLineEdit *endFreq;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QCheckBox *autoCheckSM;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *gainComboSM;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *sweep;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *clearSM;
    QSpacerItem *horizontalSpacer_19;

    void setupUi(QDialog *ValueInput)
    {
        if (ValueInput->objectName().isEmpty())
            ValueInput->setObjectName(QString::fromUtf8("ValueInput"));
        ValueInput->resize(493, 228);
        ValueInput->setMaximumSize(QSize(5000, 5000));
        stackedWidget = new QStackedWidget(ValueInput);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 471, 231));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayoutWidget_2 = new QWidget(page);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 40, 321, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        SACheck = new QCheckBox(verticalLayoutWidget_2);
        SACheck->setObjectName(QString::fromUtf8("SACheck"));

        horizontalLayout_8->addWidget(SACheck);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        SMCheck = new QCheckBox(verticalLayoutWidget_2);
        SMCheck->setObjectName(QString::fromUtf8("SMCheck"));

        horizontalLayout_9->addWidget(SMCheck);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);

        cancelChoice = new QPushButton(verticalLayoutWidget_2);
        cancelChoice->setObjectName(QString::fromUtf8("cancelChoice"));

        horizontalLayout_10->addWidget(cancelChoice);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        chooseTech = new QPushButton(verticalLayoutWidget_2);
        chooseTech->setObjectName(QString::fromUtf8("chooseTech"));

        horizontalLayout_10->addWidget(chooseTech);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_10);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayoutWidget = new QWidget(page_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 451, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        welcome = new QLabel(verticalLayoutWidget);
        welcome->setObjectName(QString::fromUtf8("welcome"));

        horizontalLayout_2->addWidget(welcome);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        f_centerIn = new QLineEdit(verticalLayoutWidget);
        f_centerIn->setObjectName(QString::fromUtf8("f_centerIn"));

        horizontalLayout_3->addWidget(f_centerIn);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        specCombo = new QComboBox(verticalLayoutWidget);
        specCombo->setObjectName(QString::fromUtf8("specCombo"));

        horizontalLayout_5->addWidget(specCombo);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        autoCheckSA = new QCheckBox(verticalLayoutWidget);
        autoCheckSA->setObjectName(QString::fromUtf8("autoCheckSA"));

        horizontalLayout_4->addWidget(autoCheckSA);

        horizontalSpacer_5 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        gainComboSA = new QComboBox(verticalLayoutWidget);
        gainComboSA->setObjectName(QString::fromUtf8("gainComboSA"));

        horizontalLayout_4->addWidget(gainComboSA);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        plot = new QPushButton(verticalLayoutWidget);
        plot->setObjectName(QString::fromUtf8("plot"));

        horizontalLayout_7->addWidget(plot);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        clearValuesSA = new QPushButton(verticalLayoutWidget);
        clearValuesSA->setObjectName(QString::fromUtf8("clearValuesSA"));

        horizontalLayout_7->addWidget(clearValuesSA);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayoutWidget_3 = new QWidget(page_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 20, 420, 181));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);

        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_14->addWidget(label_9);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_16);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_16->addWidget(label_10);

        startFreq = new QLineEdit(verticalLayoutWidget_3);
        startFreq->setObjectName(QString::fromUtf8("startFreq"));

        horizontalLayout_16->addWidget(startFreq);

        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_16->addWidget(label_12);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_17);

        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_16->addWidget(label_11);

        endFreq = new QLineEdit(verticalLayoutWidget_3);
        endFreq->setObjectName(QString::fromUtf8("endFreq"));

        horizontalLayout_16->addWidget(endFreq);

        label_13 = new QLabel(verticalLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_16->addWidget(label_13);


        verticalLayout_4->addLayout(horizontalLayout_16);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_14 = new QLabel(verticalLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_15->addWidget(label_14);

        autoCheckSM = new QCheckBox(verticalLayoutWidget_3);
        autoCheckSM->setObjectName(QString::fromUtf8("autoCheckSM"));

        horizontalLayout_15->addWidget(autoCheckSM);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_20);

        gainComboSM = new QComboBox(verticalLayoutWidget_3);
        gainComboSM->setObjectName(QString::fromUtf8("gainComboSM"));

        horizontalLayout_15->addWidget(gainComboSM);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);

        sweep = new QPushButton(verticalLayoutWidget_3);
        sweep->setObjectName(QString::fromUtf8("sweep"));

        horizontalLayout_13->addWidget(sweep);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_22);

        clearSM = new QPushButton(verticalLayoutWidget_3);
        clearSM->setObjectName(QString::fromUtf8("clearSM"));

        horizontalLayout_13->addWidget(clearSM);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);


        verticalLayout_3->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(page_3);

        retranslateUi(ValueInput);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ValueInput);
    } // setupUi

    void retranslateUi(QDialog *ValueInput)
    {
        ValueInput->setWindowTitle(QApplication::translate("ValueInput", "Dialog", nullptr));
        label_6->setText(QApplication::translate("ValueInput", "Spectrum Analyzer", nullptr));
        SACheck->setText(QString());
        label_7->setText(QApplication::translate("ValueInput", "Spectrum Monitor ", nullptr));
        SMCheck->setText(QString());
        cancelChoice->setText(QApplication::translate("ValueInput", "Cancel", nullptr));
        chooseTech->setText(QApplication::translate("ValueInput", "Start", nullptr));
        welcome->setText(QApplication::translate("ValueInput", "Welcome to Spectrum Analyzer", nullptr));
        label_2->setText(QApplication::translate("ValueInput", "f_center  : ", nullptr));
        label_5->setText(QApplication::translate("ValueInput", "MHz", nullptr));
        label_4->setText(QApplication::translate("ValueInput", "Spectrum side  : ", nullptr));
        label_3->setText(QApplication::translate("ValueInput", "Gain", nullptr));
        autoCheckSA->setText(QApplication::translate("ValueInput", " : auto", nullptr));
        plot->setText(QApplication::translate("ValueInput", "Plot", nullptr));
        clearValuesSA->setText(QApplication::translate("ValueInput", "Clear", nullptr));
        label_8->setText(QApplication::translate("ValueInput", "Welcome to Spectrum Monitor", nullptr));
        label_9->setText(QApplication::translate("ValueInput", "Please Inset Frequency Range", nullptr));
        label_10->setText(QApplication::translate("ValueInput", "Start: ", nullptr));
        label_12->setText(QApplication::translate("ValueInput", "MHz", nullptr));
        label_11->setText(QApplication::translate("ValueInput", "End: ", nullptr));
        label_13->setText(QApplication::translate("ValueInput", "MHz", nullptr));
        label_14->setText(QApplication::translate("ValueInput", "Gain : ", nullptr));
        autoCheckSM->setText(QApplication::translate("ValueInput", "auto", nullptr));
        sweep->setText(QApplication::translate("ValueInput", "Sweep", nullptr));
        clearSM->setText(QApplication::translate("ValueInput", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ValueInput: public Ui_ValueInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUEINPUT_H
