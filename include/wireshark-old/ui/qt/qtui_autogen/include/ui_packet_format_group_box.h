/********************************************************************************
** Form generated from reading UI file 'packet_format_group_box.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_FORMAT_GROUP_BOX_H
#define UI_PACKET_FORMAT_GROUP_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PacketFormatGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *summaryCheckBox;
    QCheckBox *includeColumnHeadingsCheckBox;
    QCheckBox *detailsCheckBox;
    QRadioButton *allCollapsedButton;
    QRadioButton *asDisplayedButton;
    QRadioButton *allExpandedButton;
    QCheckBox *bytesCheckBox;

    void setupUi(QGroupBox *PacketFormatGroupBox)
    {
        if (PacketFormatGroupBox->objectName().isEmpty())
            PacketFormatGroupBox->setObjectName(QString::fromUtf8("PacketFormatGroupBox"));
        PacketFormatGroupBox->resize(400, 199);
        verticalLayout = new QVBoxLayout(PacketFormatGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        summaryCheckBox = new QCheckBox(PacketFormatGroupBox);
        summaryCheckBox->setObjectName(QString::fromUtf8("summaryCheckBox"));
        summaryCheckBox->setChecked(true);

        verticalLayout->addWidget(summaryCheckBox);

        includeColumnHeadingsCheckBox = new QCheckBox(PacketFormatGroupBox);
        includeColumnHeadingsCheckBox->setObjectName(QString::fromUtf8("includeColumnHeadingsCheckBox"));
        includeColumnHeadingsCheckBox->setChecked(true);

        verticalLayout->addWidget(includeColumnHeadingsCheckBox);

        detailsCheckBox = new QCheckBox(PacketFormatGroupBox);
        detailsCheckBox->setObjectName(QString::fromUtf8("detailsCheckBox"));
        detailsCheckBox->setChecked(true);

        verticalLayout->addWidget(detailsCheckBox);

        allCollapsedButton = new QRadioButton(PacketFormatGroupBox);
        allCollapsedButton->setObjectName(QString::fromUtf8("allCollapsedButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(allCollapsedButton->sizePolicy().hasHeightForWidth());
        allCollapsedButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(allCollapsedButton);

        asDisplayedButton = new QRadioButton(PacketFormatGroupBox);
        asDisplayedButton->setObjectName(QString::fromUtf8("asDisplayedButton"));
        sizePolicy.setHeightForWidth(asDisplayedButton->sizePolicy().hasHeightForWidth());
        asDisplayedButton->setSizePolicy(sizePolicy);
        asDisplayedButton->setChecked(true);

        verticalLayout->addWidget(asDisplayedButton);

        allExpandedButton = new QRadioButton(PacketFormatGroupBox);
        allExpandedButton->setObjectName(QString::fromUtf8("allExpandedButton"));
        sizePolicy.setHeightForWidth(allExpandedButton->sizePolicy().hasHeightForWidth());
        allExpandedButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(allExpandedButton);

        bytesCheckBox = new QCheckBox(PacketFormatGroupBox);
        bytesCheckBox->setObjectName(QString::fromUtf8("bytesCheckBox"));

        verticalLayout->addWidget(bytesCheckBox);


        retranslateUi(PacketFormatGroupBox);

        QMetaObject::connectSlotsByName(PacketFormatGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *PacketFormatGroupBox)
    {
        PacketFormatGroupBox->setWindowTitle(QCoreApplication::translate("PacketFormatGroupBox", "GroupBox", nullptr));
        PacketFormatGroupBox->setTitle(QCoreApplication::translate("PacketFormatGroupBox", "Packet Format", nullptr));
#if QT_CONFIG(tooltip)
        summaryCheckBox->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Packet summary lines similar to the packet list</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        summaryCheckBox->setText(QCoreApplication::translate("PacketFormatGroupBox", "Summary line", nullptr));
        includeColumnHeadingsCheckBox->setText(QCoreApplication::translate("PacketFormatGroupBox", "Include column headings", nullptr));
#if QT_CONFIG(tooltip)
        detailsCheckBox->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Packet details similar to the protocol tree</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        detailsCheckBox->setText(QCoreApplication::translate("PacketFormatGroupBox", "Details:", nullptr));
#if QT_CONFIG(tooltip)
        allCollapsedButton->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export only top-level packet detail items</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        allCollapsedButton->setText(QCoreApplication::translate("PacketFormatGroupBox", "All co&llapsed", nullptr));
#if QT_CONFIG(tooltip)
        asDisplayedButton->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Expand and collapse packet details as they are currently displayed.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        asDisplayedButton->setText(QCoreApplication::translate("PacketFormatGroupBox", "As displa&yed", nullptr));
#if QT_CONFIG(tooltip)
        allExpandedButton->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export all packet detail items</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        allExpandedButton->setText(QCoreApplication::translate("PacketFormatGroupBox", "All e&xpanded", nullptr));
#if QT_CONFIG(tooltip)
        bytesCheckBox->setToolTip(QCoreApplication::translate("PacketFormatGroupBox", "<html><head/><body><p>Export a hexdump of the packet data similar to the packet bytes view</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bytesCheckBox->setText(QCoreApplication::translate("PacketFormatGroupBox", "Bytes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PacketFormatGroupBox: public Ui_PacketFormatGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_FORMAT_GROUP_BOX_H
