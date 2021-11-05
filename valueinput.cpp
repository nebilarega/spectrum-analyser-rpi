#include "valueinput.h"
#include "ui_valueinput.h"
#include "asyncreader.h"
#include "mainwindow.h"
#include <iostream>
#include <QCheckBox>
#include <QMessageBox>

ValueInput::ValueInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ValueInput)
{
    ui->setupUi(this);
    ValueInput::setUpPrompt();
    ValueInput::setUpSpectrumAnalyzer();
    ValueInput::setUpSpectrumMonitor();

    this->setWindowTitle("MEN");

/*
 * Stylesheets
*/
    QFile file(":/root/beautify.qss");
    if (!file.open(QIODevice::ReadOnly)){
        qDebug() << "Couldn't open file" ;
    }
    QString style(file.readAll());
    this->setStyleSheet(style);
}

ValueInput::~ValueInput()
{
    delete ui;
}
void ValueInput::setUpPrompt(){
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->SMCheck, &QCheckBox::clicked, this, &ValueInput::SMToggler);
    connect(ui->SACheck, &QCheckBox::toggled, this, &ValueInput::SAToggler);
    connect(ui->chooseTech, &QPushButton::clicked, this, &ValueInput::setTech);
}
void ValueInput::SAToggler(){
    if (ui->SACheck->isChecked()){
        ui->SMCheck->setChecked(false);
        widgetIndex = 1;
        qDebug() << "Widget: " << widgetIndex;
    }
}
void ValueInput::SMToggler(){
    if (ui->SMCheck->isChecked()){
        ui->SACheck->setChecked(false);
        widgetIndex = 2;
        qDebug() << "Widget: " << widgetIndex;
    }
}
void ValueInput::setTech(){
    ui->stackedWidget->setCurrentIndex(widgetIndex);
}
void ValueInput::setUpSpectrumAnalyzer(){
   double available_gains[] = {0.9, 1.4, 2.7, 3.7, 7.7, 8.7, 12.5,
                                14.4, 15.7, 16.6, 19.7, 20.7, 22.9, 25.4,
                                28.0, 29.7, 32.8, 33.8, 36.4, 37.2, 38.6, 40.2, 42.1, 43};
/* Setting up the gains */
    for(int i=0; i < int(sizeof (available_gains)/ sizeof(double)); i++){
        std::cout << available_gains[i];
        ui->gainComboSA->addItem(QString::number(available_gains[i]));
    }
    connect(ui->autoCheckSA, &QCheckBox::toggled, ui->gainComboSA, &QComboBox::setDisabled);

/* Setting up spectrum */
    ui->specCombo->addItem("One Sided");
//    ui->specCombo->addItem("Two sided");
/* set up plot and clear */
    ui->plot->setEnabled(false);
    connect(ui->clearValuesSA, &QPushButton::clicked, this, &ValueInput::clearInputsSpectrumAnalyzer);
    connect(ui->plot, &QPushButton::clicked, this, &ValueInput::plot);
    connect(ui->f_centerIn, &QLineEdit::textChanged, this, &ValueInput::frequencyValidator);
/* setup frequency editor */
    ui->f_centerIn->setValidator(new QDoubleValidator(24.0, 1500.0,2, ui->f_centerIn));
}

void ValueInput::frequencyValidator(){
    double value = ui->f_centerIn->text().toDouble();
    if(value >= 24 && value <= 1500)
        ui->plot->setEnabled(true);
    else
        ui->plot->setEnabled(false);

}
void ValueInput::clearInputsSpectrumAnalyzer(){
    ui->f_centerIn->clear();
    ui->autoCheckSA->setChecked(false);
    ui->gainComboSA->setCurrentIndex(0);
    ui->specCombo->setCurrentIndex(0);
}
void ValueInput::plot(){
    double inputFrequecy = ui->f_centerIn->text().toDouble();
    if(ui->autoCheckSA->isChecked()){
        AsyncReader::setGain(0);
    }
    int inputGain = ui->gainComboSA->currentText().toInt();
    AsyncReader::setFrequency(int(inputFrequecy*1000000));
    AsyncReader::setGain(inputGain);
    ValueInput::close();
}


// Setting up sepctrum monitor mode

void ValueInput::setUpSpectrumMonitor(){
    double available_gains[] = {0.9, 1.4, 2.7, 3.7, 7.7, 8.7, 12.5,
                                 14.4, 15.7, 16.6, 19.7, 20.7, 22.9, 25.4,
                                 28.0, 29.7, 32.8, 33.8, 36.4, 37.2, 38.6, 40.2, 42.1, 43};
 /* Setting up the gains */
     for(int i=0; i < int(sizeof (available_gains)/ sizeof(double)); i++){
         std::cout << available_gains[i];
         ui->gainComboSM->addItem(QString::number(available_gains[i]));
     }
     connect(ui->autoCheckSM, &QCheckBox::toggled, ui->gainComboSM, &QComboBox::setDisabled);

 /* set up sweep and clear */
     ui->sweep->setEnabled(false);
     connect(ui->clearSM, &QPushButton::clicked, this, &ValueInput::clearInputsSpectrumMonitor);

     connect(ui->startFreq, &QLineEdit::textChanged, this, &ValueInput::frequencyRangeValidator);
     connect(ui->endFreq, &QLineEdit::textChanged, this, &ValueInput::frequencyRangeValidator);
}
void ValueInput::frequencyRangeValidator(){
    double startFrequency = ui->startFreq->text().toDouble();
    double endFrequency = ui->endFreq->text().toDouble();

    if (startFrequency > 24 && startFrequency < 1490){
        if (endFrequency > 35 && endFrequency < 1500)
            ui->sweep->setEnabled(true);
        else
            ui->sweep->setEnabled(false);
    }
}
void ValueInput::clearInputsSpectrumMonitor(){
    ui->autoCheckSM->setChecked(false);
    ui->gainComboSM->setCurrentIndex(0);
    ui->startFreq->clear();
    ui->endFreq->clear();
}
void ValueInput::sweep(){

}
