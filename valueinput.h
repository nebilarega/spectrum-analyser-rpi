#ifndef VALUEINPUT_H
#define VALUEINPUT_H

#include <QDialog>

namespace Ui {
class ValueInput;
}

class ValueInput : public QDialog
{
    Q_OBJECT

public:
    explicit ValueInput(QWidget *parent = nullptr);
    ~ValueInput();

private:
    Ui::ValueInput *ui;
    int widgetIndex;
public:
    void setUpPrompt();
    void setTech();
    void setUpSpectrumAnalyzer();
    void clearInputsSpectrumAnalyzer();
    void plot();
    void setUpSpectrumMonitor();
    void clearInputsSpectrumMonitor();
    void sweep();
public slots:
    void SAToggler();
    void SMToggler();
    void frequencyValidator();
    void frequencyRangeValidator();
private:

};

#endif // VALUEINPUT_H
