/********************************************************************************
** Form generated from reading UI file 'profilereplaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEREPLAYDIALOG_H
#define UI_PROFILEREPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProfileReplayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *profileGroup;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *gpuTimesCB;
    QCheckBox *cpuTimesCB;
    QCheckBox *pixelsDrawnCB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProfileReplayDialog)
    {
        if (ProfileReplayDialog->objectName().isEmpty())
            ProfileReplayDialog->setObjectName(QString::fromUtf8("ProfileReplayDialog"));
        ProfileReplayDialog->setWindowModality(Qt::ApplicationModal);
        ProfileReplayDialog->resize(353, 165);
        ProfileReplayDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ProfileReplayDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        profileGroup = new QGroupBox(ProfileReplayDialog);
        profileGroup->setObjectName(QString::fromUtf8("profileGroup"));
        verticalLayout_2 = new QVBoxLayout(profileGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gpuTimesCB = new QCheckBox(profileGroup);
        gpuTimesCB->setObjectName(QString::fromUtf8("gpuTimesCB"));
        gpuTimesCB->setChecked(true);

        verticalLayout_2->addWidget(gpuTimesCB);

        cpuTimesCB = new QCheckBox(profileGroup);
        cpuTimesCB->setObjectName(QString::fromUtf8("cpuTimesCB"));
        cpuTimesCB->setChecked(true);

        verticalLayout_2->addWidget(cpuTimesCB);

        pixelsDrawnCB = new QCheckBox(profileGroup);
        pixelsDrawnCB->setObjectName(QString::fromUtf8("pixelsDrawnCB"));
        pixelsDrawnCB->setChecked(true);

        verticalLayout_2->addWidget(pixelsDrawnCB);


        verticalLayout->addWidget(profileGroup);

        buttonBox = new QDialogButtonBox(ProfileReplayDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProfileReplayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProfileReplayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProfileReplayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProfileReplayDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileReplayDialog)
    {
        ProfileReplayDialog->setWindowTitle(QCoreApplication::translate("ProfileReplayDialog", "Profile Configuration", nullptr));
#if QT_CONFIG(whatsthis)
        ProfileReplayDialog->setWhatsThis(QCoreApplication::translate("ProfileReplayDialog", "Allows setting options on the profiling process.", nullptr));
#endif // QT_CONFIG(whatsthis)
        profileGroup->setTitle(QCoreApplication::translate("ProfileReplayDialog", "Profiling", nullptr));
        gpuTimesCB->setText(QCoreApplication::translate("ProfileReplayDialog", "GPU times", nullptr));
        cpuTimesCB->setText(QCoreApplication::translate("ProfileReplayDialog", "CPU times", nullptr));
        pixelsDrawnCB->setText(QCoreApplication::translate("ProfileReplayDialog", "Pixels drawn per call", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileReplayDialog: public Ui_ProfileReplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEREPLAYDIALOG_H
