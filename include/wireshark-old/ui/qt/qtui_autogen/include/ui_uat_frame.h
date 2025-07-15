/********************************************************************************
** Form generated from reading UI file 'uat_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAT_FRAME_H
#define UI_UAT_FRAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_UatFrame
{
public:
    QVBoxLayout *verticalLayout;
    TabnavTreeView *uatTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *moveUpToolButton;
    QToolButton *moveDownToolButton;
    QToolButton *clearToolButton;
    QPushButton *copyFromProfileButton;
    ElidedLabel *pathLabel;

    void setupUi(QFrame *UatFrame)
    {
        if (UatFrame->objectName().isEmpty())
            UatFrame->setObjectName(QString::fromUtf8("UatFrame"));
        UatFrame->resize(513, 397);
        UatFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(UatFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        uatTreeView = new TabnavTreeView(UatFrame);
        uatTreeView->setObjectName(QString::fromUtf8("uatTreeView"));

        verticalLayout->addWidget(uatTreeView);

        hintLabel = new QLabel(UatFrame);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));
        hintLabel->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        hintLabel->setTextFormat(Qt::RichText);
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newToolButton = new QToolButton(UatFrame);
        newToolButton->setObjectName(QString::fromUtf8("newToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(UatFrame);
        deleteToolButton->setObjectName(QString::fromUtf8("deleteToolButton"));
        deleteToolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(UatFrame);
        copyToolButton->setObjectName(QString::fromUtf8("copyToolButton"));
        copyToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        moveUpToolButton = new QToolButton(UatFrame);
        moveUpToolButton->setObjectName(QString::fromUtf8("moveUpToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/stock/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpToolButton->setIcon(icon3);

        horizontalLayout->addWidget(moveUpToolButton);

        moveDownToolButton = new QToolButton(UatFrame);
        moveDownToolButton->setObjectName(QString::fromUtf8("moveDownToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/stock/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownToolButton->setIcon(icon4);

        horizontalLayout->addWidget(moveDownToolButton);

        clearToolButton = new QToolButton(UatFrame);
        clearToolButton->setObjectName(QString::fromUtf8("clearToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/stock/delete_list.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon5);

        horizontalLayout->addWidget(clearToolButton);

        copyFromProfileButton = new QPushButton(UatFrame);
        copyFromProfileButton->setObjectName(QString::fromUtf8("copyFromProfileButton"));

        horizontalLayout->addWidget(copyFromProfileButton);

        pathLabel = new ElidedLabel(UatFrame);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UatFrame);

        QMetaObject::connectSlotsByName(UatFrame);
    } // setupUi

    void retranslateUi(QFrame *UatFrame)
    {
        UatFrame->setWindowTitle(QCoreApplication::translate("UatFrame", "Frame", nullptr));
        hintLabel->setText(QString());
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Create a new entry.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Remove this entry.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Copy this entry.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveUpToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Move entry up.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveUpToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveDownToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Move entry down.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveDownToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Clear all entries.", nullptr));
#endif // QT_CONFIG(tooltip)
        clearToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        copyFromProfileButton->setToolTip(QCoreApplication::translate("UatFrame", "Copy entries from another profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyFromProfileButton->setText(QCoreApplication::translate("UatFrame", "Copy from", nullptr));
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UatFrame: public Ui_UatFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAT_FRAME_H
