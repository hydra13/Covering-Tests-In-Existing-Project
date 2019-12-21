#include "guiwidget.h"
#include "ui_guiwidget.h"

GuiWidget::GuiWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuiWidget)
{
    ui->setupUi(this);
}

GuiWidget::~GuiWidget()
{
    delete ui;
}

void GuiWidget::on_pbAddMessage_clicked()
{
    if (ui->leMessage->text().isEmpty()){
        return;
    }
    ui->teMessages->append(ui->leMessage->text());
    ui->leMessage->clear();
}
