#ifndef NOTEMAINWINDOW_H
#define NOTEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class NoteMainWindow;
}

class NoteMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoteMainWindow(QWidget *parent = nullptr);
    ~NoteMainWindow();

private:
    Ui::NoteMainWindow *ui;
};

#endif // NOTEMAINWINDOW_H
