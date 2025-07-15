/********************************************************************************
** Form generated from reading UI file 'rtp_player_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_PLAYER_DIALOG_H
#define UI_RTP_PLAYER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RtpPlayerDialog
{
public:
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QCustomPlot *audioPlot;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *playButton;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *stopButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QComboBox *outputDeviceComboBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *jitterSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *timingComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpPlayerDialog)
    {
        if (RtpPlayerDialog->objectName().isEmpty())
            RtpPlayerDialog->setObjectName(QString::fromUtf8("RtpPlayerDialog"));
        RtpPlayerDialog->resize(750, 600);
        actionReset = new QAction(RtpPlayerDialog);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionZoomIn = new QAction(RtpPlayerDialog);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomOut = new QAction(RtpPlayerDialog);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionMoveLeft10 = new QAction(RtpPlayerDialog);
        actionMoveLeft10->setObjectName(QString::fromUtf8("actionMoveLeft10"));
        actionMoveRight10 = new QAction(RtpPlayerDialog);
        actionMoveRight10->setObjectName(QString::fromUtf8("actionMoveRight10"));
        actionMoveLeft1 = new QAction(RtpPlayerDialog);
        actionMoveLeft1->setObjectName(QString::fromUtf8("actionMoveLeft1"));
        actionMoveRight1 = new QAction(RtpPlayerDialog);
        actionMoveRight1->setObjectName(QString::fromUtf8("actionMoveRight1"));
        actionGoToPacket = new QAction(RtpPlayerDialog);
        actionGoToPacket->setObjectName(QString::fromUtf8("actionGoToPacket"));
        actionDragZoom = new QAction(RtpPlayerDialog);
        actionDragZoom->setObjectName(QString::fromUtf8("actionDragZoom"));
        actionToggleTimeOrigin = new QAction(RtpPlayerDialog);
        actionToggleTimeOrigin->setObjectName(QString::fromUtf8("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(RtpPlayerDialog);
        actionCrosshairs->setObjectName(QString::fromUtf8("actionCrosshairs"));
        verticalLayout = new QVBoxLayout(RtpPlayerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(RtpPlayerDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        audioPlot = new QCustomPlot(splitter);
        audioPlot->setObjectName(QString::fromUtf8("audioPlot"));
        splitter->addWidget(audioPlot);
        streamTreeWidget = new QTreeWidget(splitter);
        streamTreeWidget->setObjectName(QString::fromUtf8("streamTreeWidget"));
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        splitter->addWidget(streamTreeWidget);

        verticalLayout->addWidget(splitter);

        hintLabel = new QLabel(RtpPlayerDialog);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        playButton = new QToolButton(RtpPlayerDialog);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout->addWidget(playButton);

        horizontalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        stopButton = new QToolButton(RtpPlayerDialog);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(RtpPlayerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        outputDeviceComboBox = new QComboBox(RtpPlayerDialog);
        outputDeviceComboBox->setObjectName(QString::fromUtf8("outputDeviceComboBox"));

        horizontalLayout->addWidget(outputDeviceComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(RtpPlayerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        jitterSpinBox = new QDoubleSpinBox(RtpPlayerDialog);
        jitterSpinBox->setObjectName(QString::fromUtf8("jitterSpinBox"));
        jitterSpinBox->setDecimals(0);
        jitterSpinBox->setMaximum(500.000000000000000);
        jitterSpinBox->setSingleStep(5.000000000000000);
        jitterSpinBox->setValue(50.000000000000000);

        horizontalLayout_2->addWidget(jitterSpinBox);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(RtpPlayerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        timingComboBox = new QComboBox(RtpPlayerDialog);
        timingComboBox->addItem(QString());
        timingComboBox->addItem(QString());
        timingComboBox->addItem(QString());
        timingComboBox->setObjectName(QString::fromUtf8("timingComboBox"));

        horizontalLayout_2->addWidget(timingComboBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        todCheckBox = new QCheckBox(RtpPlayerDialog);
        todCheckBox->setObjectName(QString::fromUtf8("todCheckBox"));

        horizontalLayout_2->addWidget(todCheckBox);

        horizontalSpacer_5 = new QSpacerItem(48, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RtpPlayerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RtpPlayerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RtpPlayerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RtpPlayerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RtpPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpPlayerDialog)
    {
        RtpPlayerDialog->setWindowTitle(QCoreApplication::translate("RtpPlayerDialog", "RTP Player", nullptr));
        actionReset->setText(QCoreApplication::translate("RtpPlayerDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("RtpPlayerDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("RtpPlayerDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("RtpPlayerDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDragZoom->setText(QCoreApplication::translate("RtpPlayerDialog", "Drag / Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionDragZoom->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Toggle mouse drag / zoom behavior", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDragZoom->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setText(QCoreApplication::translate("RtpPlayerDialog", "Capture / Session Time Origin", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleTimeOrigin->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Toggle capture / session time origin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCrosshairs->setText(QCoreApplication::translate("RtpPlayerDialog", "Crosshairs", nullptr));
#if QT_CONFIG(tooltip)
        actionCrosshairs->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Toggle crosshairs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCrosshairs->setShortcut(QCoreApplication::translate("RtpPlayerDialog", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("RtpPlayerDialog", "Payloads", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("RtpPlayerDialog", "Sample Rate (Hz)", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("RtpPlayerDialog", "Time Span (s)", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("RtpPlayerDialog", "Packets", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("RtpPlayerDialog", "Setup Frame", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("RtpPlayerDialog", "SSRC", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("RtpPlayerDialog", "Destination Port", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("RtpPlayerDialog", "Destination Address", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RtpPlayerDialog", "Source Port", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RtpPlayerDialog", "Source Address", nullptr));
#if QT_CONFIG(tooltip)
        hintLabel->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>+</th><td>Zoom in</td></th>\n"
"<tr><th>-</th><td>Zoom out</td></th>\n"
"<tr><th>0</th><td>Reset graph to its initial state</td></th>\n"
"\n"
"<tr><th>\342\206\222</th><td>Move right 10 pixels</td></th>\n"
"<tr><th>\342\206\220</th><td>Move left 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QCoreApplication::translate("RtpPlayerDialog", "<small><i>No audio</i></small>", nullptr));
        playButton->setText(QString());
        stopButton->setText(QString());
        label_3->setText(QCoreApplication::translate("RtpPlayerDialog", "Output Device:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RtpPlayerDialog", "Jitter Buffer:", nullptr));
#if QT_CONFIG(tooltip)
        jitterSpinBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "The simulated jitter buffer in milliseconds.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RtpPlayerDialog", "Playback Timing:", nullptr));
        timingComboBox->setItemText(0, QCoreApplication::translate("RtpPlayerDialog", "Jitter Buffer", nullptr));
        timingComboBox->setItemText(1, QCoreApplication::translate("RtpPlayerDialog", "RTP Timestamp", nullptr));
        timingComboBox->setItemText(2, QCoreApplication::translate("RtpPlayerDialog", "Uninterrupted Mode", nullptr));

#if QT_CONFIG(tooltip)
        timingComboBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<strong>Jitter Buffer</strong>: Use jitter buffer to simulate the RTP stream as heard by the end user.\n"
"<br/>\n"
"<strong>RTP Timestamp</strong>: Use RTP Timestamp instead of the arriving packet time. This will not reproduce the RTP stream as the user heard it, but is useful when the RTP is being tunneled and the original packet timing is missing.\n"
"<br/>\n"
"<strong>Uninterrupted Mode</strong>: Ignore the RTP Timestamp. Play the stream as it is completed. This is useful when the RTP timestamp is missing.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        todCheckBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<html><head/><body><p>View the timestamps as time of day (checked) or seconds since beginning of capture (unchecked).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        todCheckBox->setText(QCoreApplication::translate("RtpPlayerDialog", "Time of Day", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RtpPlayerDialog: public Ui_RtpPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_PLAYER_DIALOG_H
