/********************************************************************************
** Form generated from reading UI file 'shaderssourcewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERSSOURCEWIDGET_H
#define UI_SHADERSSOURCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShadersSourceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *shadersLabel;
    QComboBox *shadersCB;

    void setupUi(QWidget *ShadersSourceWidget)
    {
        if (ShadersSourceWidget->objectName().isEmpty())
            ShadersSourceWidget->setObjectName(QString::fromUtf8("ShadersSourceWidget"));
        ShadersSourceWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ShadersSourceWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        shadersLabel = new QLabel(ShadersSourceWidget);
        shadersLabel->setObjectName(QString::fromUtf8("shadersLabel"));

        horizontalLayout->addWidget(shadersLabel);

        shadersCB = new QComboBox(ShadersSourceWidget);
        shadersCB->setObjectName(QString::fromUtf8("shadersCB"));

        horizontalLayout->addWidget(shadersCB);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShadersSourceWidget);

        QMetaObject::connectSlotsByName(ShadersSourceWidget);
    } // setupUi

    void retranslateUi(QWidget *ShadersSourceWidget)
    {
        ShadersSourceWidget->setWindowTitle(QCoreApplication::translate("ShadersSourceWidget", "Form", nullptr));
        shadersLabel->setText(QCoreApplication::translate("ShadersSourceWidget", "Select a shader:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShadersSourceWidget: public Ui_ShadersSourceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERSSOURCEWIDGET_H
