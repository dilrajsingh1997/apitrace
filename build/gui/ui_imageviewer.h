/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "adaptivedoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *xSpinBox;
    QLabel *label_3;
    QSpinBox *ySpinBox;
    QLabel *pixelLabel;
    QLabel *rectLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lowerLabel;
    QDoubleSpinBox *lowerSpinBox;
    QLabel *upperLabel;
    QDoubleSpinBox *upperSpinBox;
    QCheckBox *flipCheckBox;
    QCheckBox *opaqueCheckBox;
    QCheckBox *alphaCheckBox;
    QCheckBox *resolveMSAACheckBox;
    QLabel *label;
    AdaptiveDoubleSpinBox *zoomSpinBox;
    QCheckBox *zoomToFitCheckBox;

    void setupUi(QDialog *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->resize(865, 629);
        verticalLayout = new QVBoxLayout(ImageViewer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(ImageViewer);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 845, 543));
        scrollAreaWidgetContents->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ImageViewer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        xSpinBox = new QSpinBox(ImageViewer);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setFrame(false);
        xSpinBox->setReadOnly(true);
        xSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        xSpinBox->setKeyboardTracking(false);
        xSpinBox->setMaximum(16000);

        horizontalLayout_2->addWidget(xSpinBox);

        label_3 = new QLabel(ImageViewer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ySpinBox = new QSpinBox(ImageViewer);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setFrame(false);
        ySpinBox->setReadOnly(true);
        ySpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ySpinBox->setKeyboardTracking(false);
        ySpinBox->setMaximum(16000);

        horizontalLayout_2->addWidget(ySpinBox);

        pixelLabel = new QLabel(ImageViewer);
        pixelLabel->setObjectName(QString::fromUtf8("pixelLabel"));

        horizontalLayout_2->addWidget(pixelLabel);

        rectLabel = new QLabel(ImageViewer);
        rectLabel->setObjectName(QString::fromUtf8("rectLabel"));

        horizontalLayout_2->addWidget(rectLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lowerLabel = new QLabel(ImageViewer);
        lowerLabel->setObjectName(QString::fromUtf8("lowerLabel"));

        horizontalLayout->addWidget(lowerLabel);

        lowerSpinBox = new QDoubleSpinBox(ImageViewer);
        lowerSpinBox->setObjectName(QString::fromUtf8("lowerSpinBox"));
        lowerSpinBox->setDecimals(5);
        lowerSpinBox->setMinimum(-999.999000000000024);
        lowerSpinBox->setMaximum(999.999000000000024);
        lowerSpinBox->setSingleStep(0.050000000000000);

        horizontalLayout->addWidget(lowerSpinBox);

        upperLabel = new QLabel(ImageViewer);
        upperLabel->setObjectName(QString::fromUtf8("upperLabel"));

        horizontalLayout->addWidget(upperLabel);

        upperSpinBox = new QDoubleSpinBox(ImageViewer);
        upperSpinBox->setObjectName(QString::fromUtf8("upperSpinBox"));
        upperSpinBox->setDecimals(5);
        upperSpinBox->setMinimum(-999.999000000000024);
        upperSpinBox->setMaximum(999.999000000000024);
        upperSpinBox->setSingleStep(0.050000000000000);
        upperSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(upperSpinBox);

        flipCheckBox = new QCheckBox(ImageViewer);
        flipCheckBox->setObjectName(QString::fromUtf8("flipCheckBox"));

        horizontalLayout->addWidget(flipCheckBox);

        opaqueCheckBox = new QCheckBox(ImageViewer);
        opaqueCheckBox->setObjectName(QString::fromUtf8("opaqueCheckBox"));

        horizontalLayout->addWidget(opaqueCheckBox);

        alphaCheckBox = new QCheckBox(ImageViewer);
        alphaCheckBox->setObjectName(QString::fromUtf8("alphaCheckBox"));

        horizontalLayout->addWidget(alphaCheckBox);

        resolveMSAACheckBox = new QCheckBox(ImageViewer);
        resolveMSAACheckBox->setObjectName(QString::fromUtf8("resolveMSAACheckBox"));

        horizontalLayout->addWidget(resolveMSAACheckBox);

        label = new QLabel(ImageViewer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        zoomSpinBox = new AdaptiveDoubleSpinBox(ImageViewer);
        zoomSpinBox->setObjectName(QString::fromUtf8("zoomSpinBox"));
        zoomSpinBox->setDecimals(3);
        zoomSpinBox->setMinimum(0.001000000000000);
        zoomSpinBox->setMaximum(1024.000000000000000);
        zoomSpinBox->setSingleStep(1.000000000000000);
        zoomSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(zoomSpinBox);

        zoomToFitCheckBox = new QCheckBox(ImageViewer);
        zoomToFitCheckBox->setObjectName(QString::fromUtf8("zoomToFitCheckBox"));
        zoomToFitCheckBox->setChecked(true);

        horizontalLayout->addWidget(zoomToFitCheckBox);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(xSpinBox);
        label_3->setBuddy(xSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QDialog *ImageViewer)
    {
        ImageViewer->setWindowTitle(QCoreApplication::translate("ImageViewer", "ApiTrace Surface Viewer", nullptr));
        label_2->setText(QCoreApplication::translate("ImageViewer", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("ImageViewer", "Y:", nullptr));
        pixelLabel->setText(QCoreApplication::translate("ImageViewer", "TextLabel", nullptr));
        rectLabel->setText(QCoreApplication::translate("ImageViewer", "TextLabel", nullptr));
        lowerLabel->setText(QCoreApplication::translate("ImageViewer", "Lower", nullptr));
        upperLabel->setText(QCoreApplication::translate("ImageViewer", "Upper", nullptr));
        flipCheckBox->setText(QCoreApplication::translate("ImageViewer", "Flip", nullptr));
        opaqueCheckBox->setText(QCoreApplication::translate("ImageViewer", "Opaque", nullptr));
        alphaCheckBox->setText(QCoreApplication::translate("ImageViewer", "Alpha", nullptr));
        resolveMSAACheckBox->setText(QCoreApplication::translate("ImageViewer", "resolveMSAA", nullptr));
        label->setText(QCoreApplication::translate("ImageViewer", "Zoom:", nullptr));
        zoomSpinBox->setSpecialValueText(QString());
        zoomSpinBox->setPrefix(QString());
        zoomSpinBox->setSuffix(QCoreApplication::translate("ImageViewer", "x", nullptr));
        zoomToFitCheckBox->setText(QCoreApplication::translate("ImageViewer", "Fit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
