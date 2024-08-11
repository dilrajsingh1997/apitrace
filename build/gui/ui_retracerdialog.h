/********************************************************************************
** Form generated from reading UI file 'retracerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRACERDIALOG_H
#define UI_RETRACERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RetracerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *checkboxesLayout;
    QCheckBox *doubleBufferingCB;
    QCheckBox *coreProfileCB;
    QCheckBox *errorCheckCB;
    QCheckBox *singlethreadCB;
    QGroupBox *queriesGroupBox;
    QGridLayout *gridLayout;
    QSpinBox *queryCheckReportThreshold;
    QLabel *checkThresholdLabel;
    QLabel *handlingLabel;
    QComboBox *queryHandlingSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RetracerDialog)
    {
        if (RetracerDialog->objectName().isEmpty())
            RetracerDialog->setObjectName(QString::fromUtf8("RetracerDialog"));
        RetracerDialog->setWindowModality(Qt::ApplicationModal);
        RetracerDialog->resize(238, 282);
        RetracerDialog->setModal(true);
        verticalLayout = new QVBoxLayout(RetracerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        checkboxesLayout = new QVBoxLayout();
        checkboxesLayout->setObjectName(QString::fromUtf8("checkboxesLayout"));
        doubleBufferingCB = new QCheckBox(RetracerDialog);
        doubleBufferingCB->setObjectName(QString::fromUtf8("doubleBufferingCB"));

        checkboxesLayout->addWidget(doubleBufferingCB);

        coreProfileCB = new QCheckBox(RetracerDialog);
        coreProfileCB->setObjectName(QString::fromUtf8("coreProfileCB"));

        checkboxesLayout->addWidget(coreProfileCB);

        errorCheckCB = new QCheckBox(RetracerDialog);
        errorCheckCB->setObjectName(QString::fromUtf8("errorCheckCB"));
        errorCheckCB->setChecked(true);

        checkboxesLayout->addWidget(errorCheckCB);

        singlethreadCB = new QCheckBox(RetracerDialog);
        singlethreadCB->setObjectName(QString::fromUtf8("singlethreadCB"));

        checkboxesLayout->addWidget(singlethreadCB);


        verticalLayout->addLayout(checkboxesLayout);

        queriesGroupBox = new QGroupBox(RetracerDialog);
        queriesGroupBox->setObjectName(QString::fromUtf8("queriesGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(queriesGroupBox->sizePolicy().hasHeightForWidth());
        queriesGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(queriesGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        queryCheckReportThreshold = new QSpinBox(queriesGroupBox);
        queryCheckReportThreshold->setObjectName(QString::fromUtf8("queryCheckReportThreshold"));
        queryCheckReportThreshold->setMaximum(100000);
        queryCheckReportThreshold->setSingleStep(10);

        gridLayout->addWidget(queryCheckReportThreshold, 2, 1, 1, 1);

        checkThresholdLabel = new QLabel(queriesGroupBox);
        checkThresholdLabel->setObjectName(QString::fromUtf8("checkThresholdLabel"));

        gridLayout->addWidget(checkThresholdLabel, 2, 0, 1, 1);

        handlingLabel = new QLabel(queriesGroupBox);
        handlingLabel->setObjectName(QString::fromUtf8("handlingLabel"));

        gridLayout->addWidget(handlingLabel, 1, 0, 1, 1);

        queryHandlingSelector = new QComboBox(queriesGroupBox);
        queryHandlingSelector->setObjectName(QString::fromUtf8("queryHandlingSelector"));
        queryHandlingSelector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(queryHandlingSelector, 1, 1, 1, 1);


        verticalLayout->addWidget(queriesGroupBox);

        buttonBox = new QDialogButtonBox(RetracerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RetracerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RetracerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RetracerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RetracerDialog);
    } // setupUi

    void retranslateUi(QDialog *RetracerDialog)
    {
        RetracerDialog->setWindowTitle(QCoreApplication::translate("RetracerDialog", "Retracer Configuration", nullptr));
#if QT_CONFIG(whatsthis)
        RetracerDialog->setWhatsThis(QCoreApplication::translate("RetracerDialog", "Allows setting options on the retracing process.", nullptr));
#endif // QT_CONFIG(whatsthis)
        doubleBufferingCB->setText(QCoreApplication::translate("RetracerDialog", "Use double buffering", nullptr));
        coreProfileCB->setText(QCoreApplication::translate("RetracerDialog", "Use core profile", nullptr));
        errorCheckCB->setText(QCoreApplication::translate("RetracerDialog", "Error checking", nullptr));
        singlethreadCB->setText(QCoreApplication::translate("RetracerDialog", "Singlethread", nullptr));
        queriesGroupBox->setTitle(QCoreApplication::translate("RetracerDialog", "Queries", nullptr));
#if QT_CONFIG(tooltip)
        queryCheckReportThreshold->setToolTip(QCoreApplication::translate("RetracerDialog", "Thresshold to report differentce between recorded query result and result obtained while executing the query.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkThresholdLabel->setText(QCoreApplication::translate("RetracerDialog", "Check threshold:", nullptr));
        handlingLabel->setText(QCoreApplication::translate("RetracerDialog", "Handling:", nullptr));
#if QT_CONFIG(statustip)
        queryHandlingSelector->setStatusTip(QCoreApplication::translate("RetracerDialog", "How to handle calls to get the query result.", nullptr));
#endif // QT_CONFIG(statustip)
        queryHandlingSelector->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class RetracerDialog: public Ui_RetracerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRACERDIALOG_H
