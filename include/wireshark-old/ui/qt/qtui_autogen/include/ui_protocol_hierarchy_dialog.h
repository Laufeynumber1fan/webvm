/********************************************************************************
** Form generated from reading UI file 'protocol_hierarchy_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTOCOL_HIERARCHY_DIALOG_H
#define UI_PROTOCOL_HIERARCHY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProtocolHierarchyDialog
{
public:
    QAction *actionCopyAsCsv;
    QAction *actionCopyAsYaml;
    QVBoxLayout *verticalLayout;
    QTreeWidget *hierStatsTreeWidget;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProtocolHierarchyDialog)
    {
        if (ProtocolHierarchyDialog->objectName().isEmpty())
            ProtocolHierarchyDialog->setObjectName(QString::fromUtf8("ProtocolHierarchyDialog"));
        ProtocolHierarchyDialog->resize(620, 480);
        actionCopyAsCsv = new QAction(ProtocolHierarchyDialog);
        actionCopyAsCsv->setObjectName(QString::fromUtf8("actionCopyAsCsv"));
        actionCopyAsYaml = new QAction(ProtocolHierarchyDialog);
        actionCopyAsYaml->setObjectName(QString::fromUtf8("actionCopyAsYaml"));
        verticalLayout = new QVBoxLayout(ProtocolHierarchyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hierStatsTreeWidget = new QTreeWidget(ProtocolHierarchyDialog);
        hierStatsTreeWidget->setObjectName(QString::fromUtf8("hierStatsTreeWidget"));
        hierStatsTreeWidget->setUniformRowHeights(true);
        hierStatsTreeWidget->header()->setDefaultSectionSize(50);
        hierStatsTreeWidget->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(hierStatsTreeWidget);

        hintLabel = new QLabel(ProtocolHierarchyDialog);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(ProtocolHierarchyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProtocolHierarchyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProtocolHierarchyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProtocolHierarchyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProtocolHierarchyDialog);
    } // setupUi

    void retranslateUi(QDialog *ProtocolHierarchyDialog)
    {
        ProtocolHierarchyDialog->setWindowTitle(QCoreApplication::translate("ProtocolHierarchyDialog", "Dialog", nullptr));
        actionCopyAsCsv->setText(QCoreApplication::translate("ProtocolHierarchyDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCsv->setToolTip(QCoreApplication::translate("ProtocolHierarchyDialog", "Copy stream list as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYaml->setText(QCoreApplication::translate("ProtocolHierarchyDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYaml->setToolTip(QCoreApplication::translate("ProtocolHierarchyDialog", "Copy stream list as YAML.", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = hierStatsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("ProtocolHierarchyDialog", "End Bits/s", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("ProtocolHierarchyDialog", "End Bytes", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("ProtocolHierarchyDialog", "End Packets", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("ProtocolHierarchyDialog", "Bits/s", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("ProtocolHierarchyDialog", "Bytes", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("ProtocolHierarchyDialog", "Percent Bytes", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ProtocolHierarchyDialog", "Packets", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ProtocolHierarchyDialog", "Percent Packets", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ProtocolHierarchyDialog", "Protocol", nullptr));
        hintLabel->setText(QCoreApplication::translate("ProtocolHierarchyDialog", "<small><i>A hint.</i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProtocolHierarchyDialog: public Ui_ProtocolHierarchyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROTOCOL_HIERARCHY_DIALOG_H
