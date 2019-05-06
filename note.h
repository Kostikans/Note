#ifndef NOTE_H
#define NOTE_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QTextBrowser>
#include <QTextEdit>
namespace Ui {
class Note;
}

class Note : public QWidget
{
    Q_OBJECT

public:
    explicit Note(QWidget *parent = nullptr);
    ~Note();

private slots:
    void on_plainTextEdit_textChanged();



private:
    Ui::Note *ui;
    QString m_noteText;


};

#endif // NOTE_H
