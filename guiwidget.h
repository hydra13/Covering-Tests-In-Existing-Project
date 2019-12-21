#ifndef GUIWIDGET_H
#define GUIWIDGET_H

#include <QWidget>

namespace Ui {
class GuiWidget;
}

class GuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GuiWidget(QWidget *parent = nullptr);
    ~GuiWidget();

private slots:
    void on_pbAddMessage_clicked();

private:
    Ui::GuiWidget *ui;
};

#endif // GUIWIDGET_H
