#ifndef NOTEMAINWINDOW_H
#define NOTEMAINWINDOW_H

#include <QMainWindow>
#include "QToolBar"
#include <QLabel>
#include <QVector>

namespace Ui {
class NoteMainWindow;
}

class NoteMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoteMainWindow(QWidget *parent = nullptr);
    ~NoteMainWindow();

private slots:

    void on_textEdit_textChanged();
    void on_pushButton_clicked();

private:
    Ui::NoteMainWindow *ui;
    QMap<unsigned int, QString> *NoteList;
    QString currentText;
    unsigned int i;
};

#endif // NOTEMAINWINDOW_H
