#ifndef SAVEMAP_H
#define SAVEMAP_H

#include <QDialog>

namespace Ui {
class SaveMap;
}

class SaveMap : public QDialog
{
    Q_OBJECT

public:
    explicit SaveMap(QWidget *parent = nullptr);
    ~SaveMap();
    QString fileName = "";
private slots:
    void on_BrowseButton_clicked();

    void on_fileNameEdit_textChanged(const QString &arg1);

private:
    Ui::SaveMap *ui;
};

#endif // SAVEMAP_H
