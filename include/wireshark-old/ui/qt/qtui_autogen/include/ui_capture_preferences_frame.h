/********************************************************************************
** Form generated from reading UI file 'capture_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_PREFERENCES_FRAME_H
#define UI_CAPTURE_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CapturePreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *defaultInterfaceSpacer;
    QComboBox *defaultInterfaceComboBox;
    QCheckBox *capturePromModeCheckBox;
    QCheckBox *capturePcapNgCheckBox;
    QCheckBox *captureRealTimeCheckBox;
    QCheckBox *captureAutoScrollCheckBox;
    QCheckBox *captureNoInterfaceLoad;
    QCheckBox *captureNoExtcapCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *CapturePreferencesFrame)
    {
        if (CapturePreferencesFrame->objectName().isEmpty())
            CapturePreferencesFrame->setObjectName(QString::fromUtf8("CapturePreferencesFrame"));
        CapturePreferencesFrame->resize(354, 220);
        CapturePreferencesFrame->setMinimumSize(QSize(0, 191));
        CapturePreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(CapturePreferencesFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CapturePreferencesFrame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        defaultInterfaceSpacer = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(defaultInterfaceSpacer);

        defaultInterfaceComboBox = new QComboBox(CapturePreferencesFrame);
        defaultInterfaceComboBox->setObjectName(QString::fromUtf8("defaultInterfaceComboBox"));
        defaultInterfaceComboBox->setEditable(true);

        horizontalLayout->addWidget(defaultInterfaceComboBox);


        verticalLayout->addLayout(horizontalLayout);

        capturePromModeCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePromModeCheckBox->setObjectName(QString::fromUtf8("capturePromModeCheckBox"));

        verticalLayout->addWidget(capturePromModeCheckBox);

        capturePcapNgCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePcapNgCheckBox->setObjectName(QString::fromUtf8("capturePcapNgCheckBox"));

        verticalLayout->addWidget(capturePcapNgCheckBox);

        captureRealTimeCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureRealTimeCheckBox->setObjectName(QString::fromUtf8("captureRealTimeCheckBox"));

        verticalLayout->addWidget(captureRealTimeCheckBox);

        captureAutoScrollCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureAutoScrollCheckBox->setObjectName(QString::fromUtf8("captureAutoScrollCheckBox"));

        verticalLayout->addWidget(captureAutoScrollCheckBox);

        captureNoInterfaceLoad = new QCheckBox(CapturePreferencesFrame);
        captureNoInterfaceLoad->setObjectName(QString::fromUtf8("captureNoInterfaceLoad"));

        verticalLayout->addWidget(captureNoInterfaceLoad);

        captureNoExtcapCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureNoExtcapCheckBox->setObjectName(QString::fromUtf8("captureNoExtcapCheckBox"));

        verticalLayout->addWidget(captureNoExtcapCheckBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CapturePreferencesFrame);

        QMetaObject::connectSlotsByName(CapturePreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *CapturePreferencesFrame)
    {
        CapturePreferencesFrame->setWindowTitle(QCoreApplication::translate("CapturePreferencesFrame", "Frame", nullptr));
        label->setText(QCoreApplication::translate("CapturePreferencesFrame", "Default interface", nullptr));
#if QT_CONFIG(tooltip)
        capturePromModeCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>You probably want to enable this. Usually a network card will only capture the traffic sent to its own network address. If you want to capture all traffic that the network card can &quot;see&quot;, mark this option. See the FAQ for some more details of capturing packets from a switched network.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        capturePromModeCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Capture packets in promiscuous mode", nullptr));
#if QT_CONFIG(tooltip)
        capturePcapNgCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Capture packets in the next-generation capture file format.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        capturePcapNgCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Capture packets in pcapng format", nullptr));
#if QT_CONFIG(tooltip)
        captureRealTimeCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Update the list of packets while capture is in progress. This can result in dropped packets on high-speed networks.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        captureRealTimeCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Update list of packets in real time", nullptr));
#if QT_CONFIG(tooltip)
        captureAutoScrollCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Keep the packet list scrolled to the bottom while capturing.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        captureAutoScrollCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Automatic scrolling in live capture", nullptr));
        captureNoInterfaceLoad->setText(QCoreApplication::translate("CapturePreferencesFrame", "Don't load interfaces on startup", nullptr));
        captureNoExtcapCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Disable external capture interfaces", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CapturePreferencesFrame: public Ui_CapturePreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_PREFERENCES_FRAME_H
