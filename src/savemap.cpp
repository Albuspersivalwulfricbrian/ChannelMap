#include "savemap.h"
#include "ui_savemap.h"
#include "QFileDialog"
#include"iostream"
SaveMap::SaveMap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveMap)
{
    ui->setupUi(this);
}

SaveMap::~SaveMap()
{
    delete ui;
}

void SaveMap::on_BrowseButton_clicked()
{
    fileName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);
    ui->fileNameEdit->setText(fileName+"/ChannelMap.json");

}


void SaveMap::on_fileNameEdit_textChanged(const QString &arg1)
{
    fileName = arg1;
    //std::cout << fileName.toStdString();
}
