/********************************************************************************
** Form generated from reading UI file 'argumentseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARGUMENTSEDITOR_H
#define UI_ARGUMENTSEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glsledit.h"

QT_BEGIN_NAMESPACE

class Ui_ArgumentsEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *callLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *revertButton;
    QTabWidget *argsTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTreeView *argsTree;
    QWidget *shaderTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *selectStringCB;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *lengthLabel;
    GLSLEdit *glslEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ArgumentsEditor)
    {
        if (ArgumentsEditor->objectName().isEmpty())
            ArgumentsEditor->setObjectName(QString::fromUtf8("ArgumentsEditor"));
        ArgumentsEditor->resize(481, 615);
        ArgumentsEditor->setSizeGripEnabled(false);
        ArgumentsEditor->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ArgumentsEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        callLabel = new QLabel(ArgumentsEditor);
        callLabel->setObjectName(QString::fromUtf8("callLabel"));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        callLabel->setFont(font);

        horizontalLayout->addWidget(callLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        revertButton = new QPushButton(ArgumentsEditor);
        revertButton->setObjectName(QString::fromUtf8("revertButton"));
        revertButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        revertButton->setIcon(icon);

        horizontalLayout_2->addWidget(revertButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        argsTabWidget = new QTabWidget(ArgumentsEditor);
        argsTabWidget->setObjectName(QString::fromUtf8("argsTabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        argsTree = new QTreeView(tab);
        argsTree->setObjectName(QString::fromUtf8("argsTree"));
        argsTree->header()->setVisible(false);

        verticalLayout->addWidget(argsTree);

        argsTabWidget->addTab(tab, QString());
        shaderTab = new QWidget();
        shaderTab->setObjectName(QString::fromUtf8("shaderTab"));
        verticalLayout_3 = new QVBoxLayout(shaderTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        selectStringCB = new QComboBox(shaderTab);
        selectStringCB->setObjectName(QString::fromUtf8("selectStringCB"));

        horizontalLayout_4->addWidget(selectStringCB);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(shaderTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lengthLabel = new QLabel(shaderTab);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        horizontalLayout_3->addWidget(lengthLabel);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        glslEdit = new GLSLEdit(shaderTab);
        glslEdit->setObjectName(QString::fromUtf8("glslEdit"));

        verticalLayout_3->addWidget(glslEdit);

        argsTabWidget->addTab(shaderTab, QString());

        verticalLayout_2->addWidget(argsTabWidget);

        buttonBox = new QDialogButtonBox(ArgumentsEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ArgumentsEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), ArgumentsEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ArgumentsEditor, SLOT(reject()));

        argsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ArgumentsEditor);
    } // setupUi

    void retranslateUi(QDialog *ArgumentsEditor)
    {
        ArgumentsEditor->setWindowTitle(QCoreApplication::translate("ArgumentsEditor", "Trace Arguments Editor", nullptr));
        callLabel->setText(QCoreApplication::translate("ArgumentsEditor", "TextLabel", nullptr));
        revertButton->setText(QCoreApplication::translate("ArgumentsEditor", "Revert", nullptr));
        argsTabWidget->setTabText(argsTabWidget->indexOf(tab), QCoreApplication::translate("ArgumentsEditor", "Arguments", nullptr));
        label->setText(QCoreApplication::translate("ArgumentsEditor", "Length:", nullptr));
        lengthLabel->setText(QCoreApplication::translate("ArgumentsEditor", "100", nullptr));
        argsTabWidget->setTabText(argsTabWidget->indexOf(shaderTab), QCoreApplication::translate("ArgumentsEditor", "Shader", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArgumentsEditor: public Ui_ArgumentsEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARGUMENTSEDITOR_H
