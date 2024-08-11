/********************************************************************************
** Form generated from reading UI file 'tracedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEDIALOG_H
#define UI_TRACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TraceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *applicationEdit;
    QLabel *label;
    QComboBox *apiComboBox;
    QLabel *label_3;
    QLineEdit *workingDirEdit;
    QLabel *label_2;
    QLineEdit *argumentsEdit;
    QToolButton *browseButton;
    QToolButton *browseWorkingDirButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TraceDialog)
    {
        if (TraceDialog->objectName().isEmpty())
            TraceDialog->setObjectName(QString::fromUtf8("TraceDialog"));
        TraceDialog->resize(500, 250);
        verticalLayout = new QVBoxLayout(TraceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TraceDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        applicationEdit = new QLineEdit(TraceDialog);
        applicationEdit->setObjectName(QString::fromUtf8("applicationEdit"));

        gridLayout->addWidget(applicationEdit, 1, 1, 1, 1);

        label = new QLabel(TraceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        apiComboBox = new QComboBox(TraceDialog);
        apiComboBox->setObjectName(QString::fromUtf8("apiComboBox"));

        gridLayout->addWidget(apiComboBox, 0, 1, 1, 1);

        label_3 = new QLabel(TraceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        workingDirEdit = new QLineEdit(TraceDialog);
        workingDirEdit->setObjectName(QString::fromUtf8("workingDirEdit"));

        gridLayout->addWidget(workingDirEdit, 2, 1, 1, 1);

        label_2 = new QLabel(TraceDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        argumentsEdit = new QLineEdit(TraceDialog);
        argumentsEdit->setObjectName(QString::fromUtf8("argumentsEdit"));

        gridLayout->addWidget(argumentsEdit, 3, 1, 1, 1);

        browseButton = new QToolButton(TraceDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout->addWidget(browseButton, 1, 2, 1, 1);

        browseWorkingDirButton = new QToolButton(TraceDialog);
        browseWorkingDirButton->setObjectName(QString::fromUtf8("browseWorkingDirButton"));

        gridLayout->addWidget(browseWorkingDirButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(TraceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TraceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TraceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TraceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TraceDialog);
    } // setupUi

    void retranslateUi(QDialog *TraceDialog)
    {
        TraceDialog->setWindowTitle(QCoreApplication::translate("TraceDialog", "Tracing", nullptr));
        label_4->setText(QCoreApplication::translate("TraceDialog", "Working directory:", nullptr));
        applicationEdit->setPlaceholderText(QCoreApplication::translate("TraceDialog", "Application to trace", nullptr));
        label->setText(QCoreApplication::translate("TraceDialog", "Application:", nullptr));
        label_3->setText(QCoreApplication::translate("TraceDialog", "API:", nullptr));
        workingDirEdit->setPlaceholderText(QCoreApplication::translate("TraceDialog", "QApiTrace's working directory", nullptr));
        label_2->setText(QCoreApplication::translate("TraceDialog", "Arguments:", nullptr));
        argumentsEdit->setPlaceholderText(QCoreApplication::translate("TraceDialog", "Separate arguments with \";\"", nullptr));
        browseButton->setText(QCoreApplication::translate("TraceDialog", "...", nullptr));
        browseWorkingDirButton->setText(QCoreApplication::translate("TraceDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TraceDialog: public Ui_TraceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEDIALOG_H
