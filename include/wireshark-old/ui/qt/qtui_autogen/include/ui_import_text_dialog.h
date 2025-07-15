/********************************************************************************
** Form generated from reading UI file 'import_text_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_TEXT_DIALOG_H
#define UI_IMPORT_TEXT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ImportTextDialog
{
public:
    QFormLayout *formLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *textFileLineEdit;
    QPushButton *textFileBrowseButton;
    QGridLayout *gridLayout_2;
    QRadioButton *octalOffsetButton;
    QLabel *label_2;
    QRadioButton *hexOffsetButton;
    QRadioButton *decimalOffsetButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *noOffsetButton;
    QLabel *noOffsetLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *dateTimeLineEdit;
    QLabel *timestampExampleLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *directionIndicationLabel;
    QCheckBox *directionIndicationCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *encapComboBox;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *headerGridLayout;
    SyntaxLineEdit *sourcePortLineEdit;
    SyntaxLineEdit *ppiLineEdit;
    SyntaxLineEdit *destinationPortLineEdit;
    QRadioButton *ethernetButton;
    QRadioButton *sctpButton;
    QLabel *ppiLabel;
    QLabel *protocolLabel;
    QRadioButton *noDummyButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *tagLabel;
    QRadioButton *udpButton;
    QLabel *sourcePortLabel;
    SyntaxLineEdit *ethertypeLineEdit;
    QRadioButton *tcpButton;
    SyntaxLineEdit *tagLineEdit;
    QLabel *destinationPortLabel;
    QLabel *ethertypeLabel;
    SyntaxLineEdit *protocolLineEdit;
    QRadioButton *sctpDataButton;
    QRadioButton *ipv4Button;
    QRadioButton *exportPduButton;
    QLabel *payloadLabel;
    SyntaxLineEdit *payloadLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    SyntaxLineEdit *maxLengthLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportTextDialog)
    {
        if (ImportTextDialog->objectName().isEmpty())
            ImportTextDialog->setObjectName(QString::fromUtf8("ImportTextDialog"));
        ImportTextDialog->resize(472, 486);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImportTextDialog->sizePolicy().hasHeightForWidth());
        ImportTextDialog->setSizePolicy(sizePolicy);
        ImportTextDialog->setMaximumSize(QSize(16777215, 486));
        ImportTextDialog->setSizeGripEnabled(true);
        ImportTextDialog->setModal(true);
        formLayout_3 = new QFormLayout(ImportTextDialog);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        groupBox = new QGroupBox(ImportTextDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        textFileLineEdit = new QLineEdit(groupBox);
        textFileLineEdit->setObjectName(QString::fromUtf8("textFileLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textFileLineEdit->sizePolicy().hasHeightForWidth());
        textFileLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(textFileLineEdit);

        textFileBrowseButton = new QPushButton(groupBox);
        textFileBrowseButton->setObjectName(QString::fromUtf8("textFileBrowseButton"));

        horizontalLayout_2->addWidget(textFileBrowseButton);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        octalOffsetButton = new QRadioButton(groupBox);
        octalOffsetButton->setObjectName(QString::fromUtf8("octalOffsetButton"));

        gridLayout_2->addWidget(octalOffsetButton, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        hexOffsetButton = new QRadioButton(groupBox);
        hexOffsetButton->setObjectName(QString::fromUtf8("hexOffsetButton"));
        hexOffsetButton->setChecked(true);

        gridLayout_2->addWidget(hexOffsetButton, 0, 1, 1, 1);

        decimalOffsetButton = new QRadioButton(groupBox);
        decimalOffsetButton->setObjectName(QString::fromUtf8("decimalOffsetButton"));

        gridLayout_2->addWidget(decimalOffsetButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 3, 1);

        noOffsetButton = new QRadioButton(groupBox);
        noOffsetButton->setObjectName(QString::fromUtf8("noOffsetButton"));

        gridLayout_2->addWidget(noOffsetButton, 3, 1, 1, 1);

        noOffsetLabel = new QLabel(groupBox);
        noOffsetLabel->setObjectName(QString::fromUtf8("noOffsetLabel"));
        QFont font;
        font.setItalic(false);
        noOffsetLabel->setFont(font);

        gridLayout_2->addWidget(noOffsetLabel, 3, 2, 1, 1);


        formLayout_2->setLayout(2, QFormLayout::SpanningRole, gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dateTimeLineEdit = new QLineEdit(groupBox);
        dateTimeLineEdit->setObjectName(QString::fromUtf8("dateTimeLineEdit"));

        horizontalLayout_3->addWidget(dateTimeLineEdit);

        timestampExampleLabel = new QLabel(groupBox);
        timestampExampleLabel->setObjectName(QString::fromUtf8("timestampExampleLabel"));

        horizontalLayout_3->addWidget(timestampExampleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        formLayout_2->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        directionIndicationLabel = new QLabel(groupBox);
        directionIndicationLabel->setObjectName(QString::fromUtf8("directionIndicationLabel"));

        horizontalLayout_5->addWidget(directionIndicationLabel);

        directionIndicationCheckBox = new QCheckBox(groupBox);
        directionIndicationCheckBox->setObjectName(QString::fromUtf8("directionIndicationCheckBox"));

        horizontalLayout_5->addWidget(directionIndicationCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        formLayout_2->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_5);


        formLayout_3->setWidget(0, QFormLayout::SpanningRole, groupBox);

        groupBox_2 = new QGroupBox(ImportTextDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFlat(true);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        encapComboBox = new QComboBox(groupBox_2);
        encapComboBox->setObjectName(QString::fromUtf8("encapComboBox"));

        horizontalLayout->addWidget(encapComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        headerGridLayout = new QGridLayout();
        headerGridLayout->setObjectName(QString::fromUtf8("headerGridLayout"));
        sourcePortLineEdit = new SyntaxLineEdit(groupBox_2);
        sourcePortLineEdit->setObjectName(QString::fromUtf8("sourcePortLineEdit"));

        headerGridLayout->addWidget(sourcePortLineEdit, 3, 2, 1, 1);

        ppiLineEdit = new SyntaxLineEdit(groupBox_2);
        ppiLineEdit->setObjectName(QString::fromUtf8("ppiLineEdit"));

        headerGridLayout->addWidget(ppiLineEdit, 6, 2, 1, 1);

        destinationPortLineEdit = new SyntaxLineEdit(groupBox_2);
        destinationPortLineEdit->setObjectName(QString::fromUtf8("destinationPortLineEdit"));

        headerGridLayout->addWidget(destinationPortLineEdit, 4, 2, 1, 1);

        ethernetButton = new QRadioButton(groupBox_2);
        ethernetButton->setObjectName(QString::fromUtf8("ethernetButton"));

        headerGridLayout->addWidget(ethernetButton, 1, 0, 1, 1);

        sctpButton = new QRadioButton(groupBox_2);
        sctpButton->setObjectName(QString::fromUtf8("sctpButton"));

        headerGridLayout->addWidget(sctpButton, 5, 0, 1, 1);

        ppiLabel = new QLabel(groupBox_2);
        ppiLabel->setObjectName(QString::fromUtf8("ppiLabel"));

        headerGridLayout->addWidget(ppiLabel, 6, 1, 1, 1);

        protocolLabel = new QLabel(groupBox_2);
        protocolLabel->setObjectName(QString::fromUtf8("protocolLabel"));

        headerGridLayout->addWidget(protocolLabel, 2, 1, 1, 1);

        noDummyButton = new QRadioButton(groupBox_2);
        noDummyButton->setObjectName(QString::fromUtf8("noDummyButton"));
        noDummyButton->setChecked(true);

        headerGridLayout->addWidget(noDummyButton, 0, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerGridLayout->addItem(horizontalSpacer_4, 0, 3, 7, 1);

        tagLabel = new QLabel(groupBox_2);
        tagLabel->setObjectName(QString::fromUtf8("tagLabel"));

        headerGridLayout->addWidget(tagLabel, 5, 1, 1, 1);

        udpButton = new QRadioButton(groupBox_2);
        udpButton->setObjectName(QString::fromUtf8("udpButton"));

        headerGridLayout->addWidget(udpButton, 3, 0, 1, 1);

        sourcePortLabel = new QLabel(groupBox_2);
        sourcePortLabel->setObjectName(QString::fromUtf8("sourcePortLabel"));

        headerGridLayout->addWidget(sourcePortLabel, 3, 1, 1, 1);

        ethertypeLineEdit = new SyntaxLineEdit(groupBox_2);
        ethertypeLineEdit->setObjectName(QString::fromUtf8("ethertypeLineEdit"));
        ethertypeLineEdit->setCursorPosition(0);

        headerGridLayout->addWidget(ethertypeLineEdit, 1, 2, 1, 1);

        tcpButton = new QRadioButton(groupBox_2);
        tcpButton->setObjectName(QString::fromUtf8("tcpButton"));

        headerGridLayout->addWidget(tcpButton, 4, 0, 1, 1);

        tagLineEdit = new SyntaxLineEdit(groupBox_2);
        tagLineEdit->setObjectName(QString::fromUtf8("tagLineEdit"));

        headerGridLayout->addWidget(tagLineEdit, 5, 2, 1, 1);

        destinationPortLabel = new QLabel(groupBox_2);
        destinationPortLabel->setObjectName(QString::fromUtf8("destinationPortLabel"));

        headerGridLayout->addWidget(destinationPortLabel, 4, 1, 1, 1);

        ethertypeLabel = new QLabel(groupBox_2);
        ethertypeLabel->setObjectName(QString::fromUtf8("ethertypeLabel"));

        headerGridLayout->addWidget(ethertypeLabel, 1, 1, 1, 1);

        protocolLineEdit = new SyntaxLineEdit(groupBox_2);
        protocolLineEdit->setObjectName(QString::fromUtf8("protocolLineEdit"));

        headerGridLayout->addWidget(protocolLineEdit, 2, 2, 1, 1);

        sctpDataButton = new QRadioButton(groupBox_2);
        sctpDataButton->setObjectName(QString::fromUtf8("sctpDataButton"));

        headerGridLayout->addWidget(sctpDataButton, 6, 0, 1, 1);

        ipv4Button = new QRadioButton(groupBox_2);
        ipv4Button->setObjectName(QString::fromUtf8("ipv4Button"));

        headerGridLayout->addWidget(ipv4Button, 2, 0, 1, 1);

        exportPduButton = new QRadioButton(groupBox_2);
        exportPduButton->setObjectName(QString::fromUtf8("exportPduButton"));

        headerGridLayout->addWidget(exportPduButton, 8, 0, 1, 1);

        payloadLabel = new QLabel(groupBox_2);
        payloadLabel->setObjectName(QString::fromUtf8("payloadLabel"));

        headerGridLayout->addWidget(payloadLabel, 8, 1, 1, 1);

        payloadLineEdit = new SyntaxLineEdit(groupBox_2);
        payloadLineEdit->setObjectName(QString::fromUtf8("payloadLineEdit"));

        headerGridLayout->addWidget(payloadLineEdit, 8, 2, 1, 1);


        formLayout->setLayout(1, QFormLayout::SpanningRole, headerGridLayout);


        formLayout_3->setWidget(1, QFormLayout::SpanningRole, groupBox_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(ImportTextDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        maxLengthLineEdit = new SyntaxLineEdit(ImportTextDialog);
        maxLengthLineEdit->setObjectName(QString::fromUtf8("maxLengthLineEdit"));

        horizontalLayout_4->addWidget(maxLengthLineEdit);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        buttonBox = new QDialogButtonBox(ImportTextDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Open);

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(ImportTextDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportTextDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportTextDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportTextDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportTextDialog)
    {
        groupBox->setTitle(QCoreApplication::translate("ImportTextDialog", "Import From", nullptr));
        label->setText(QCoreApplication::translate("ImportTextDialog", "File:", nullptr));
#if QT_CONFIG(tooltip)
        textFileLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "Set name of text file to import", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        textFileBrowseButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Browse for text file to import", nullptr));
#endif // QT_CONFIG(tooltip)
        textFileBrowseButton->setText(QCoreApplication::translate("ImportTextDialog", "Browse\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        octalOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in octal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        octalOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Octal", nullptr));
        label_2->setText(QCoreApplication::translate("ImportTextDialog", "Offsets:", nullptr));
#if QT_CONFIG(tooltip)
        hexOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in hexadecimal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        hexOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Hexadecimal", nullptr));
#if QT_CONFIG(tooltip)
        decimalOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in decimal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        decimalOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Decimal", nullptr));
#if QT_CONFIG(tooltip)
        noOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "The text file has no offset", nullptr));
#endif // QT_CONFIG(tooltip)
        noOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "None", nullptr));
        noOffsetLabel->setText(QString());
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("ImportTextDialog", "The format in which to parse timestamps in the text file (eg. %H:%M:%S.). Format specifiers are based on strptime(3)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("ImportTextDialog", "Timestamp format:", nullptr));
#if QT_CONFIG(tooltip)
        dateTimeLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The format in which to parse timestamps in the text file (eg. %H:%M:%S.). Format specifiers are based on strptime(3)", nullptr));
#endif // QT_CONFIG(tooltip)
        timestampExampleLabel->setText(QString());
#if QT_CONFIG(tooltip)
        directionIndicationLabel->setToolTip(QCoreApplication::translate("ImportTextDialog", "Whether or not the file contains information indicating the direction (inbound or outbound) of the packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        directionIndicationLabel->setText(QCoreApplication::translate("ImportTextDialog", "Direction indication:", nullptr));
#if QT_CONFIG(tooltip)
        directionIndicationCheckBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "Whether or not the file contains information indicating the direction (inbound or outbound) of the packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("ImportTextDialog", "Encapsulation", nullptr));
        label_4->setText(QCoreApplication::translate("ImportTextDialog", "Encapsulation Type:", nullptr));
#if QT_CONFIG(tooltip)
        encapComboBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "Encapsulation type of the frames in the import capture file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sourcePortLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The UDP, TCP or SCTP source port for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ppiLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The SCTP DATA payload protocol identifier for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        destinationPortLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The UDP, TCP or SCTP destination port for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ethernetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet header", nullptr));
#endif // QT_CONFIG(tooltip)
        ethernetButton->setText(QCoreApplication::translate("ImportTextDialog", "Ethernet", nullptr));
#if QT_CONFIG(tooltip)
        sctpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IPv4 and SCTP header", nullptr));
#endif // QT_CONFIG(tooltip)
        sctpButton->setText(QCoreApplication::translate("ImportTextDialog", "SCTP", nullptr));
        ppiLabel->setText(QCoreApplication::translate("ImportTextDialog", "PPI:", nullptr));
        protocolLabel->setText(QCoreApplication::translate("ImportTextDialog", "Protocol (dec):", nullptr));
#if QT_CONFIG(tooltip)
        noDummyButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Leave frames unchanged", nullptr));
#endif // QT_CONFIG(tooltip)
        noDummyButton->setText(QCoreApplication::translate("ImportTextDialog", "No dummy header", nullptr));
        tagLabel->setText(QCoreApplication::translate("ImportTextDialog", "Tag:", nullptr));
#if QT_CONFIG(tooltip)
        udpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IPv4 and UDP header", nullptr));
#endif // QT_CONFIG(tooltip)
        udpButton->setText(QCoreApplication::translate("ImportTextDialog", "UDP", nullptr));
        sourcePortLabel->setText(QCoreApplication::translate("ImportTextDialog", "Source port:", nullptr));
#if QT_CONFIG(tooltip)
        ethertypeLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The Ethertype value of each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tcpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IPv4 and TCP header", nullptr));
#endif // QT_CONFIG(tooltip)
        tcpButton->setText(QCoreApplication::translate("ImportTextDialog", "TCP", nullptr));
#if QT_CONFIG(tooltip)
        tagLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The SCTP verification tag for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
        destinationPortLabel->setText(QCoreApplication::translate("ImportTextDialog", "Destination port:", nullptr));
        ethertypeLabel->setText(QCoreApplication::translate("ImportTextDialog", "Ethertype (hex):", nullptr));
#if QT_CONFIG(tooltip)
        protocolLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The IPv4 protocol ID for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sctpDataButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IPv4 and SCTP (DATA) header", nullptr));
#endif // QT_CONFIG(tooltip)
        sctpDataButton->setText(QCoreApplication::translate("ImportTextDialog", "SCTP (Data)", nullptr));
#if QT_CONFIG(tooltip)
        ipv4Button->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet and IPv4 header", nullptr));
#endif // QT_CONFIG(tooltip)
        ipv4Button->setText(QCoreApplication::translate("ImportTextDialog", "IPv4", nullptr));
        exportPduButton->setText(QCoreApplication::translate("ImportTextDialog", "ExportPDU", nullptr));
        payloadLabel->setText(QCoreApplication::translate("ImportTextDialog", "Payload", nullptr));
        label_11->setText(QCoreApplication::translate("ImportTextDialog", "Maximum frame length:", nullptr));
#if QT_CONFIG(tooltip)
        maxLengthLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The maximum size of the frames to write to the import capture file (max 256kiB)", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)ImportTextDialog;
    } // retranslateUi

};

namespace Ui {
    class ImportTextDialog: public Ui_ImportTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_TEXT_DIALOG_H
