/********************************************************************************
** Form generated from reading UI file 'rtp_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_STREAM_DIALOG_H
#define UI_RTP_STREAM_DIALOG_H

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

class Ui_RtpStreamDialog
{
public:
    QAction *actionFindReverse;
    QAction *actionMarkPackets;
    QAction *actionSelectNone;
    QAction *actionGoToSetup;
    QAction *actionPrepareFilter;
    QAction *actionExportAsRtpDump;
    QAction *actionAnalyze;
    QAction *actionCopyAsCsv;
    QAction *actionCopyAsYaml;
    QVBoxLayout *verticalLayout;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpStreamDialog)
    {
        if (RtpStreamDialog->objectName().isEmpty())
            RtpStreamDialog->setObjectName(QString::fromUtf8("RtpStreamDialog"));
        RtpStreamDialog->resize(600, 460);
        actionFindReverse = new QAction(RtpStreamDialog);
        actionFindReverse->setObjectName(QString::fromUtf8("actionFindReverse"));
        actionMarkPackets = new QAction(RtpStreamDialog);
        actionMarkPackets->setObjectName(QString::fromUtf8("actionMarkPackets"));
        actionSelectNone = new QAction(RtpStreamDialog);
        actionSelectNone->setObjectName(QString::fromUtf8("actionSelectNone"));
        actionGoToSetup = new QAction(RtpStreamDialog);
        actionGoToSetup->setObjectName(QString::fromUtf8("actionGoToSetup"));
        actionPrepareFilter = new QAction(RtpStreamDialog);
        actionPrepareFilter->setObjectName(QString::fromUtf8("actionPrepareFilter"));
        actionExportAsRtpDump = new QAction(RtpStreamDialog);
        actionExportAsRtpDump->setObjectName(QString::fromUtf8("actionExportAsRtpDump"));
        actionAnalyze = new QAction(RtpStreamDialog);
        actionAnalyze->setObjectName(QString::fromUtf8("actionAnalyze"));
        actionCopyAsCsv = new QAction(RtpStreamDialog);
        actionCopyAsCsv->setObjectName(QString::fromUtf8("actionCopyAsCsv"));
        actionCopyAsYaml = new QAction(RtpStreamDialog);
        actionCopyAsYaml->setObjectName(QString::fromUtf8("actionCopyAsYaml"));
        verticalLayout = new QVBoxLayout(RtpStreamDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        streamTreeWidget = new QTreeWidget(RtpStreamDialog);
        streamTreeWidget->setObjectName(QString::fromUtf8("streamTreeWidget"));
        streamTreeWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        streamTreeWidget->setTextElideMode(Qt::ElideMiddle);
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        streamTreeWidget->setSortingEnabled(true);
        streamTreeWidget->setExpandsOnDoubleClick(false);
        streamTreeWidget->header()->setDefaultSectionSize(50);

        verticalLayout->addWidget(streamTreeWidget);

        hintLabel = new QLabel(RtpStreamDialog);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(RtpStreamDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RtpStreamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RtpStreamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RtpStreamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RtpStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpStreamDialog)
    {
        RtpStreamDialog->setWindowTitle(QCoreApplication::translate("RtpStreamDialog", "Dialog", nullptr));
        actionFindReverse->setText(QCoreApplication::translate("RtpStreamDialog", "Find Reverse", nullptr));
#if QT_CONFIG(tooltip)
        actionFindReverse->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Find the reverse stream matching the selected forward stream.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindReverse->setShortcut(QCoreApplication::translate("RtpStreamDialog", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMarkPackets->setText(QCoreApplication::translate("RtpStreamDialog", "Mark Packets", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkPackets->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Mark the packets of the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarkPackets->setShortcut(QCoreApplication::translate("RtpStreamDialog", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectNone->setText(QCoreApplication::translate("RtpStreamDialog", "Select None", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectNone->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Undo stream selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToSetup->setText(QCoreApplication::translate("RtpStreamDialog", "Go To Setup", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToSetup->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Go to the setup packet for this stream.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToSetup->setShortcut(QCoreApplication::translate("RtpStreamDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrepareFilter->setText(QCoreApplication::translate("RtpStreamDialog", "Prepare Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilter->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Prepare a filter matching the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrepareFilter->setShortcut(QCoreApplication::translate("RtpStreamDialog", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportAsRtpDump->setText(QCoreApplication::translate("RtpStreamDialog", "Export As RTPDump", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAsRtpDump->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Export the stream payload as rtpdump", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportAsRtpDump->setShortcut(QCoreApplication::translate("RtpStreamDialog", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAnalyze->setText(QCoreApplication::translate("RtpStreamDialog", "Analyze", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyze->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Open the analysis window for the selected stream(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsCsv->setText(QCoreApplication::translate("RtpStreamDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCsv->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Copy stream list as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYaml->setText(QCoreApplication::translate("RtpStreamDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYaml->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Copy stream list as YAML.", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(11, QCoreApplication::translate("RtpStreamDialog", "Status", nullptr));
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("RtpStreamDialog", "Mean Jitter", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("RtpStreamDialog", "Max Jitter", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("RtpStreamDialog", "Max Delta (ms)", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("RtpStreamDialog", "Lost", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("RtpStreamDialog", "Packets", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("RtpStreamDialog", "Payload", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("RtpStreamDialog", "SSRC", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("RtpStreamDialog", "Destination Port", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("RtpStreamDialog", "Destination Address", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RtpStreamDialog", "Source Port", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RtpStreamDialog", "Source Address", nullptr));
        hintLabel->setText(QCoreApplication::translate("RtpStreamDialog", "<small><i>A hint.</i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RtpStreamDialog: public Ui_RtpStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_STREAM_DIALOG_H
