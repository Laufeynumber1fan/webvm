/********************************************************************************
** Form generated from reading UI file 'sctp_all_assocs_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_ALL_ASSOCS_DIALOG_H
#define UI_SCTP_ALL_ASSOCS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCTPAllAssocsDialog
{
public:
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveUp10;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveDown10;
    QAction *actionMoveUp1;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionMoveDown1;
    QAction *actionNextStream;
    QAction *actionPreviousStream;
    QAction *actionSwitchDirection;
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleSequenceNumbers;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QAction *actionRoundTripTime;
    QAction *actionThroughput;
    QAction *actionStevens;
    QAction *actionWindowScaling;
    QAction *actionTcptrace;
    QVBoxLayout *verticalLayout;
    QTableWidget *assocList;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setFilterButton;
    QPushButton *analyseButton;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPAllAssocsDialog)
    {
        if (SCTPAllAssocsDialog->objectName().isEmpty())
            SCTPAllAssocsDialog->setObjectName(QString::fromUtf8("SCTPAllAssocsDialog"));
        SCTPAllAssocsDialog->resize(685, 300);
        actionReset = new QAction(SCTPAllAssocsDialog);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionZoomIn = new QAction(SCTPAllAssocsDialog);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomOut = new QAction(SCTPAllAssocsDialog);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionMoveUp10 = new QAction(SCTPAllAssocsDialog);
        actionMoveUp10->setObjectName(QString::fromUtf8("actionMoveUp10"));
        actionMoveLeft10 = new QAction(SCTPAllAssocsDialog);
        actionMoveLeft10->setObjectName(QString::fromUtf8("actionMoveLeft10"));
        actionMoveRight10 = new QAction(SCTPAllAssocsDialog);
        actionMoveRight10->setObjectName(QString::fromUtf8("actionMoveRight10"));
        actionMoveDown10 = new QAction(SCTPAllAssocsDialog);
        actionMoveDown10->setObjectName(QString::fromUtf8("actionMoveDown10"));
        actionMoveUp1 = new QAction(SCTPAllAssocsDialog);
        actionMoveUp1->setObjectName(QString::fromUtf8("actionMoveUp1"));
        actionMoveLeft1 = new QAction(SCTPAllAssocsDialog);
        actionMoveLeft1->setObjectName(QString::fromUtf8("actionMoveLeft1"));
        actionMoveRight1 = new QAction(SCTPAllAssocsDialog);
        actionMoveRight1->setObjectName(QString::fromUtf8("actionMoveRight1"));
        actionMoveDown1 = new QAction(SCTPAllAssocsDialog);
        actionMoveDown1->setObjectName(QString::fromUtf8("actionMoveDown1"));
        actionNextStream = new QAction(SCTPAllAssocsDialog);
        actionNextStream->setObjectName(QString::fromUtf8("actionNextStream"));
        actionPreviousStream = new QAction(SCTPAllAssocsDialog);
        actionPreviousStream->setObjectName(QString::fromUtf8("actionPreviousStream"));
        actionSwitchDirection = new QAction(SCTPAllAssocsDialog);
        actionSwitchDirection->setObjectName(QString::fromUtf8("actionSwitchDirection"));
        actionGoToPacket = new QAction(SCTPAllAssocsDialog);
        actionGoToPacket->setObjectName(QString::fromUtf8("actionGoToPacket"));
        actionDragZoom = new QAction(SCTPAllAssocsDialog);
        actionDragZoom->setObjectName(QString::fromUtf8("actionDragZoom"));
        actionToggleSequenceNumbers = new QAction(SCTPAllAssocsDialog);
        actionToggleSequenceNumbers->setObjectName(QString::fromUtf8("actionToggleSequenceNumbers"));
        actionToggleTimeOrigin = new QAction(SCTPAllAssocsDialog);
        actionToggleTimeOrigin->setObjectName(QString::fromUtf8("actionToggleTimeOrigin"));
        actionCrosshairs = new QAction(SCTPAllAssocsDialog);
        actionCrosshairs->setObjectName(QString::fromUtf8("actionCrosshairs"));
        actionRoundTripTime = new QAction(SCTPAllAssocsDialog);
        actionRoundTripTime->setObjectName(QString::fromUtf8("actionRoundTripTime"));
        actionThroughput = new QAction(SCTPAllAssocsDialog);
        actionThroughput->setObjectName(QString::fromUtf8("actionThroughput"));
        actionStevens = new QAction(SCTPAllAssocsDialog);
        actionStevens->setObjectName(QString::fromUtf8("actionStevens"));
        actionWindowScaling = new QAction(SCTPAllAssocsDialog);
        actionWindowScaling->setObjectName(QString::fromUtf8("actionWindowScaling"));
        actionTcptrace = new QAction(SCTPAllAssocsDialog);
        actionTcptrace->setObjectName(QString::fromUtf8("actionTcptrace"));
        verticalLayout = new QVBoxLayout(SCTPAllAssocsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        assocList = new QTableWidget(SCTPAllAssocsDialog);
        if (assocList->columnCount() < 6)
            assocList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (assocList->rowCount() < 2)
            assocList->setRowCount(2);
        assocList->setObjectName(QString::fromUtf8("assocList"));
        assocList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        assocList->setProperty("showDropIndicator", QVariant(false));
        assocList->setDragDropOverwriteMode(false);
        assocList->setAlternatingRowColors(true);
        assocList->setSelectionMode(QAbstractItemView::SingleSelection);
        assocList->setSelectionBehavior(QAbstractItemView::SelectRows);
        assocList->setSortingEnabled(true);
        assocList->setWordWrap(false);
        assocList->setRowCount(2);
        assocList->setColumnCount(6);
        assocList->horizontalHeader()->setMinimumSectionSize(50);
        assocList->horizontalHeader()->setDefaultSectionSize(120);
        assocList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(assocList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        setFilterButton = new QPushButton(SCTPAllAssocsDialog);
        setFilterButton->setObjectName(QString::fromUtf8("setFilterButton"));
        setFilterButton->setEnabled(false);
        setFilterButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(setFilterButton);

        analyseButton = new QPushButton(SCTPAllAssocsDialog);
        analyseButton->setObjectName(QString::fromUtf8("analyseButton"));
        analyseButton->setEnabled(false);
        analyseButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(analyseButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(SCTPAllAssocsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SCTPAllAssocsDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), SCTPAllAssocsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SCTPAllAssocsDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPAllAssocsDialog)
    {
        SCTPAllAssocsDialog->setWindowTitle(QCoreApplication::translate("SCTPAllAssocsDialog", "Wireshark - SCTP Associations", nullptr));
        actionReset->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp10->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Up 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp10->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Up 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp10->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown10->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Down 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown10->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Down 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown10->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Up 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp1->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Up 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp1->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Left 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Left 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Right 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Right 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Down 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown1->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Move Down 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown1->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextStream->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Next Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionNextStream->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Go to the next stream in the capture", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextStream->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviousStream->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Previous Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionPreviousStream->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Go to the previous stream in the capture", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPreviousStream->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchDirection->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch Direction", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchDirection->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch direction (swap TCP endpoints)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchDirection->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDragZoom->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Drag / Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionDragZoom->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Toggle mouse drag / zoom behavior", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDragZoom->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleSequenceNumbers->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Relative / Absolute Sequence Numbers", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleSequenceNumbers->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Toggle relative / absolute sequence numbers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleSequenceNumbers->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Capture / Session Time Origin", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleTimeOrigin->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Toggle capture / session time origin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCrosshairs->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Crosshairs", nullptr));
#if QT_CONFIG(tooltip)
        actionCrosshairs->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Toggle crosshairs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCrosshairs->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRoundTripTime->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Round Trip Time", nullptr));
#if QT_CONFIG(tooltip)
        actionRoundTripTime->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch to the Round Trip Time graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRoundTripTime->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionThroughput->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Throughput", nullptr));
#if QT_CONFIG(tooltip)
        actionThroughput->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch to the Throughput graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionThroughput->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStevens->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Time / Sequence (Stevens)", nullptr));
#if QT_CONFIG(tooltip)
        actionStevens->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch to the Stevens-style Time / Sequence graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStevens->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWindowScaling->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Window Scaling", nullptr));
#if QT_CONFIG(tooltip)
        actionWindowScaling->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch to the Window Scaling graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWindowScaling->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTcptrace->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Time / Sequence (tcptrace)", nullptr));
#if QT_CONFIG(tooltip)
        actionTcptrace->setToolTip(QCoreApplication::translate("SCTPAllAssocsDialog", "Switch to the tcptrace-style Time / Sequence graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTcptrace->setShortcut(QCoreApplication::translate("SCTPAllAssocsDialog", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        QTableWidgetItem *___qtablewidgetitem = assocList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = assocList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Port 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = assocList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Port 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = assocList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of Packets", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = assocList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of DATA Chunks", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = assocList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of Bytes", nullptr));
        setFilterButton->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Filter Selected Association", nullptr));
        analyseButton->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Analyze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPAllAssocsDialog: public Ui_SCTPAllAssocsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_ALL_ASSOCS_DIALOG_H
