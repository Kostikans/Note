#include "notemainwindow.h"
#include "ui_notemainwindow.h"
#include "note.h"
#include <QString>

NoteMainWindow::NoteMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoteMainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(1);
    NoteList = new QMap<unsigned int, QString>;
    i = 0;
    label = new QLabel;
}

NoteMainWindow::~NoteMainWindow()
{
    delete ui;
}

void NoteMainWindow::on_textEdit_textChanged()
{
    currentText = ui->textEdit->toPlainText();
    NoteList->find(i)->swap(currentText);
    label->setText(NoteList->find(i).value());
    label->show();
}

void NoteMainWindow::on_pushButton_clicked()
{
    ui->textEdit->setReadOnly(0);
    NoteList->insert(i,currentText);
}
