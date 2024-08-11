/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *closeButton;
    QLineEdit *lineEdit;
    QToolButton *prevButton;
    QToolButton *nextButton;
    QCheckBox *caseSensitiveBox;
    QCheckBox *regexBox;
    QLabel *notFoundLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(547, 33);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchWidget->sizePolicy().hasHeightForWidth());
        SearchWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SearchWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        closeButton = new QToolButton(SearchWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setAutoRaise(true);
        closeButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(closeButton);

        lineEdit = new QLineEdit(SearchWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(170, 0));

        horizontalLayout->addWidget(lineEdit);

        prevButton = new QToolButton(SearchWidget);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/go-up-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevButton->setIcon(icon1);

        horizontalLayout->addWidget(prevButton);

        nextButton = new QToolButton(SearchWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/go-down-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon2);

        horizontalLayout->addWidget(nextButton);

        caseSensitiveBox = new QCheckBox(SearchWidget);
        caseSensitiveBox->setObjectName(QString::fromUtf8("caseSensitiveBox"));

        horizontalLayout->addWidget(caseSensitiveBox);

        regexBox = new QCheckBox(SearchWidget);
        regexBox->setObjectName(QString::fromUtf8("regexBox"));

        horizontalLayout->addWidget(regexBox);

        notFoundLabel = new QLabel(SearchWidget);
        notFoundLabel->setObjectName(QString::fromUtf8("notFoundLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(notFoundLabel->sizePolicy().hasHeightForWidth());
        notFoundLabel->setSizePolicy(sizePolicy1);
        notFoundLabel->setMinimumSize(QSize(50, 0));
        notFoundLabel->setMaximumSize(QSize(130, 25));
        notFoundLabel->setTextFormat(Qt::RichText);
        notFoundLabel->setScaledContents(true);
        notFoundLabel->setMargin(0);
        notFoundLabel->setIndent(30);

        horizontalLayout->addWidget(notFoundLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QCoreApplication::translate("SearchWidget", "Form", nullptr));
        closeButton->setText(QCoreApplication::translate("SearchWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        prevButton->setToolTip(QCoreApplication::translate("SearchWidget", "Find previous occurance of the string", nullptr));
#endif // QT_CONFIG(tooltip)
        prevButton->setText(QCoreApplication::translate("SearchWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("SearchWidget", "Find next occurance of the text", nullptr));
#endif // QT_CONFIG(tooltip)
        nextButton->setText(QCoreApplication::translate("SearchWidget", "...", nullptr));
        caseSensitiveBox->setText(QCoreApplication::translate("SearchWidget", "Case Sensitive", nullptr));
        regexBox->setText(QCoreApplication::translate("SearchWidget", "&Regex", nullptr));
        notFoundLabel->setText(QCoreApplication::translate("SearchWidget", "<b>Text not found</b>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
