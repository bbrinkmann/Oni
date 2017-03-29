/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QPushButton *close;
    QPushButton *aboutQt;
    QTabWidget *tabWidget;
    QWidget *tabAbout;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *aboutLabel;
    QWidget *tabLicenses;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLicenses;
    QLabel *link_M;
    QLabel *author_M;
    QLabel *textAuthor;
    QLabel *img_M;
    QLabel *textIcon;
    QLabel *link_S;
    QLabel *img_S;
    QLabel *author_S;
    QLabel *textLink;
    QLabel *img_S_2;
    QLabel *author_S_2;
    QLabel *link_S_2;
    QTextBrowser *textLicenses;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *licensesLabel;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutWindow->sizePolicy().hasHeightForWidth());
        AboutWindow->setSizePolicy(sizePolicy);
        AboutWindow->setMinimumSize(QSize(600, 400));
        AboutWindow->setMaximumSize(QSize(600, 400));
        close = new QPushButton(AboutWindow);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(440, 360, 110, 32));
        aboutQt = new QPushButton(AboutWindow);
        aboutQt->setObjectName(QStringLiteral("aboutQt"));
        aboutQt->setGeometry(QRect(30, 360, 110, 32));
        tabWidget = new QTabWidget(AboutWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(2, 2, 596, 351));
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        gridLayoutWidget_3 = new QWidget(tabAbout);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(9, 0, 581, 321));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        aboutLabel = new QLabel(gridLayoutWidget_3);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));

        gridLayout_4->addWidget(aboutLabel, 0, 0, 1, 1);

        tabWidget->addTab(tabAbout, QString());
        tabLicenses = new QWidget();
        tabLicenses->setObjectName(QStringLiteral("tabLicenses"));
        gridLayoutWidget = new QWidget(tabLicenses);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 110, 571, 192));
        gridLicenses = new QGridLayout(gridLayoutWidget);
        gridLicenses->setObjectName(QStringLiteral("gridLicenses"));
        gridLicenses->setContentsMargins(0, 0, 0, 0);
        link_M = new QLabel(gridLayoutWidget);
        link_M->setObjectName(QStringLiteral("link_M"));
        link_M->setMaximumSize(QSize(250, 50));
        link_M->setAlignment(Qt::AlignCenter);
        link_M->setWordWrap(true);

        gridLicenses->addWidget(link_M, 1, 2, 1, 1);

        author_M = new QLabel(gridLayoutWidget);
        author_M->setObjectName(QStringLiteral("author_M"));
        author_M->setMaximumSize(QSize(250, 50));
        author_M->setAlignment(Qt::AlignCenter);
        author_M->setWordWrap(true);

        gridLicenses->addWidget(author_M, 1, 1, 1, 1);

        textAuthor = new QLabel(gridLayoutWidget);
        textAuthor->setObjectName(QStringLiteral("textAuthor"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        textAuthor->setFont(font);
        textAuthor->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(textAuthor, 0, 1, 1, 1);

        img_M = new QLabel(gridLayoutWidget);
        img_M->setObjectName(QStringLiteral("img_M"));
        img_M->setMaximumSize(QSize(50, 50));
        img_M->setPixmap(QPixmap(QString::fromUtf8(":/pics/pieces/master_red.png")));
        img_M->setScaledContents(true);
        img_M->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(img_M, 1, 0, 1, 1);

        textIcon = new QLabel(gridLayoutWidget);
        textIcon->setObjectName(QStringLiteral("textIcon"));
        textIcon->setFont(font);
        textIcon->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(textIcon, 0, 0, 1, 1);

        link_S = new QLabel(gridLayoutWidget);
        link_S->setObjectName(QStringLiteral("link_S"));
        link_S->setMaximumSize(QSize(250, 50));
        link_S->setAlignment(Qt::AlignCenter);
        link_S->setWordWrap(true);

        gridLicenses->addWidget(link_S, 2, 2, 1, 1);

        img_S = new QLabel(gridLayoutWidget);
        img_S->setObjectName(QStringLiteral("img_S"));
        img_S->setMaximumSize(QSize(50, 50));
        img_S->setPixmap(QPixmap(QString::fromUtf8(":/pics/pieces/scolar_red.png")));
        img_S->setScaledContents(true);
        img_S->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(img_S, 2, 0, 1, 1);

        author_S = new QLabel(gridLayoutWidget);
        author_S->setObjectName(QStringLiteral("author_S"));
        author_S->setMaximumSize(QSize(250, 50));
        author_S->setAlignment(Qt::AlignCenter);
        author_S->setWordWrap(true);

        gridLicenses->addWidget(author_S, 2, 1, 1, 1);

        textLink = new QLabel(gridLayoutWidget);
        textLink->setObjectName(QStringLiteral("textLink"));
        textLink->setFont(font);
        textLink->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(textLink, 0, 2, 1, 1);

        img_S_2 = new QLabel(gridLayoutWidget);
        img_S_2->setObjectName(QStringLiteral("img_S_2"));
        img_S_2->setMaximumSize(QSize(50, 50));
        img_S_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/buttons/whiteFlag.png")));
        img_S_2->setScaledContents(true);
        img_S_2->setAlignment(Qt::AlignCenter);

        gridLicenses->addWidget(img_S_2, 3, 0, 1, 1);

        author_S_2 = new QLabel(gridLayoutWidget);
        author_S_2->setObjectName(QStringLiteral("author_S_2"));
        author_S_2->setMaximumSize(QSize(250, 50));
        author_S_2->setAlignment(Qt::AlignCenter);
        author_S_2->setWordWrap(true);

        gridLicenses->addWidget(author_S_2, 3, 1, 1, 1);

        link_S_2 = new QLabel(gridLayoutWidget);
        link_S_2->setObjectName(QStringLiteral("link_S_2"));
        link_S_2->setMaximumSize(QSize(250, 50));
        link_S_2->setAlignment(Qt::AlignCenter);
        link_S_2->setWordWrap(true);

        gridLicenses->addWidget(link_S_2, 3, 2, 1, 1);

        textLicenses = new QTextBrowser(tabLicenses);
        textLicenses->setObjectName(QStringLiteral("textLicenses"));
        textLicenses->setEnabled(false);
        textLicenses->setGeometry(QRect(0, 0, 590, 320));
        sizePolicy.setHeightForWidth(textLicenses->sizePolicy().hasHeightForWidth());
        textLicenses->setSizePolicy(sizePolicy);
        textLicenses->setContextMenuPolicy(Qt::NoContextMenu);
        textLicenses->setAutoFillBackground(false);
        textLicenses->setLocale(QLocale(QLocale::English, QLocale::Germany));
        textLicenses->setFrameShape(QFrame::Panel);
        textLicenses->setFrameShadow(QFrame::Plain);
        textLicenses->setLineWidth(0);
        textLicenses->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textLicenses->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textLicenses->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textLicenses->setReadOnly(true);
        textLicenses->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        textLicenses->setOpenExternalLinks(true);
        gridLayoutWidget_2 = new QWidget(tabLicenses);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 571, 91));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        licensesLabel = new QLabel(gridLayoutWidget_2);
        licensesLabel->setObjectName(QStringLiteral("licensesLabel"));

        gridLayout->addWidget(licensesLabel, 0, 0, 1, 1);

        tabWidget->addTab(tabLicenses, QString());
        textLicenses->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();

        retranslateUi(AboutWindow);
        QObject::connect(close, SIGNAL(clicked()), AboutWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "About Oni", Q_NULLPTR));
        close->setText(QApplication::translate("AboutWindow", "Close", Q_NULLPTR));
        aboutQt->setText(QApplication::translate("AboutWindow", "About Qt", Q_NULLPTR));
        aboutLabel->setText(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Oni</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">This software is a digitally version of the boardgame </span><a href=\"http://www.arcanewonders.com/Onitama\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">Onitama</span></a><span style=\" font-size:8pt; color:#000000;\"> by </span><a href=\"http:/"
                        "/www.arcanewonders.com/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">Arcane Wonders</span></a><span style=\" font-size:8pt; color:#000000;\">. </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">We do not own any rights on the original game.<br /></span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">Onitama is a two-player, perfect information abstract game with a random starting setup.<br /></span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#000000;\">Github</span></p>\n"
"<p align=\"center\" style=\" mar"
                        "gin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">This software was written in C++, while the GUI uses Qt.<br />You can find our sourcecode on Github: </span><a href=\"https://github.com/gwolffgang/Oni\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">https://github.com/gwolffgang/Oni</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#000000;\">Developers</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p>\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cell"
                        "spacing=\"2\" cellpadding=\"0\">\n"
"<tr>\n"
"<td>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; color:#000000;\" align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Georg Wolffgang<br />(lead programmer)</li></ul></td>\n"
"<td>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; color:#000000;\" align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alexandar Tomic<br />(coder/debugger)</li></ul></td>\n"
"<td>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; color:#000000;\" align=\"center"
                        "\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Benjamin Brinkmann<br />(coder / AI-programmer)</li></ul></td></tr></table></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("AboutWindow", "About Oni", Q_NULLPTR));
        link_M->setText(QApplication::translate("AboutWindow", "<a href=\"https://openclipart.org/detail/265528/samurai-men\">https://openclipart.org/detail/265528/samurai-men</a>", Q_NULLPTR));
        author_M->setText(QApplication::translate("AboutWindow", "Isidoro Ambasch", Q_NULLPTR));
        textAuthor->setText(QApplication::translate("AboutWindow", "Author", Q_NULLPTR));
        img_M->setText(QString());
        textIcon->setText(QApplication::translate("AboutWindow", "Icon", Q_NULLPTR));
        link_S->setText(QApplication::translate("AboutWindow", "<a href=\"https://openclipart.org/detail/233706/samurai-leaf\">https://openclipart.org/detail/233706/samurai-leaf</a>", Q_NULLPTR));
        img_S->setText(QString());
        author_S->setText(QApplication::translate("AboutWindow", "rones", Q_NULLPTR));
        textLink->setText(QApplication::translate("AboutWindow", "Link", Q_NULLPTR));
        img_S_2->setText(QString());
        author_S_2->setText(QApplication::translate("AboutWindow", "Firkin", Q_NULLPTR));
        link_S_2->setText(QApplication::translate("AboutWindow", "<a href=\"https://openclipart.org/detail/265235/hirnlichtspieles-white-flag-vectorized\">https://openclipart.org/detail/265235/hirnlichtspieles-white-flag-vectorized</a>", Q_NULLPTR));
        textLicenses->setHtml(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        licensesLabel->setText(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; color:#000000;\">Licenses</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; color:#000000;\">All graphics are under the license of </span><a href=\"https://de.wikipedia.org/wiki/GNU_General_Public_License\"><span style=\" font-size:7.8pt; text-decoration: underline; color:#0000ff;\">GNU General Public License</span></a><sp"
                        "an style=\" font-family:'.SF NS Text'; color:#000000;\"> or selfmade. </span></p></body><object\n"
"width=\"794\"\n"
"height=\"1123\"\n"
"type=\"application/pdf\"\n"
"data=\"../Oni/docs/Onitama Deutsch.pdf\">\n"
"</object></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabLicenses), QApplication::translate("AboutWindow", "Licenses", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
