/********************************************************************************
** Form generated from reading UI file 'savemap.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEMAP_H
#define UI_SAVEMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SaveMap
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *BrowseButton;
    QLineEdit *fileNameEdit;

    void setupUi(QDialog *SaveMap)
    {
        if (SaveMap->objectName().isEmpty())
            SaveMap->setObjectName(QString::fromUtf8("SaveMap"));
        SaveMap->resize(1148, 255);
        buttonBox = new QDialogButtonBox(SaveMap);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(760, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        BrowseButton = new QPushButton(SaveMap);
        BrowseButton->setObjectName(QString::fromUtf8("BrowseButton"));
        BrowseButton->setGeometry(QRect(930, 50, 170, 48));
        fileNameEdit = new QLineEdit(SaveMap);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));
        fileNameEdit->setGeometry(QRect(30, 50, 831, 51));

        retranslateUi(SaveMap);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveMap, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveMap, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveMap);
    } // setupUi

    void retranslateUi(QDialog *SaveMap)
    {
        SaveMap->setWindowTitle(QApplication::translate("SaveMap", "Dialog", nullptr));
        BrowseButton->setText(QApplication::translate("SaveMap", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveMap: public Ui_SaveMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEMAP_H
