#include "notemainwindow.h"
#include "ui_notemainwindow.h"

NoteMainWindow::NoteMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoteMainWindow)
{
    ui->setupUi(this);
}

NoteMainWindow::~NoteMainWindow()
{
    delete ui;
}
