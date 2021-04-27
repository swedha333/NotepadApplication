#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>
#include<QFontDialog>
#include<QFontInfo>
#include<QFont>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>
#include<QColor>
#include<QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionnew_triggered()
{
    file_path=" ";
    ui->textEdit->setText(" ");
}

void MainWindow::on_actioncut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actioncopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionpaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionundo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionredo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionquit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionopen_triggered()
{
    QString f=QFileDialog::getOpenFileName(this,"Open the File");
    QFile file(f);
    file_path=f;
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionsave_triggered()
{
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actionsave_as_triggered()
{
    QString f=QFileDialog::getSaveFileName(this,"Save the File");
    QFile file(f);
    file_path=f;
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actionselect_font_triggered()
{
    bool fontselected;
    QFont font=QFontDialog::getFont(&fontselected,this);
    if(fontselected)
    {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::on_actionabout_qt_triggered()
{
    QMessageBox::information(this,"ABOUT QT","Qt is a widget toolkit for creating graphical user interfaces as well as cross-platform applications");
}

/*void MainWindow::on_actionprint_triggered()
{
    QPrinter p;
    p.setPrinterName("HP Laser Jet");
    QPrintDialog pd(&p,this);
    if(pd.exec()==QDialog::Rejected)
    {
        QMessageBox::warning(this,"Error","Can't access printer");
        return;
    }
    ui->textEdit->print(&p);
}*/



void MainWindow::on_actionfont_color_triggered()
{
    QColor fc=QColorDialog::getColor(Qt::white,this,"Choose a color");
    if(fc.isValid())
    {
        ui->textEdit->setTextColor(fc);
    }
}

void MainWindow::on_actionitalic_triggered()
{
    ui->textEdit->setFontItalic(true);
}

void MainWindow::on_actionunderline_triggered()
{
    ui->textEdit->setFontUnderline(true);
}

void MainWindow::on_actionbold_triggered()
{
    ui->textEdit->setFontWeight(QFont::Bold);
}

void MainWindow::on_actionfont_background_color_triggered()
{
    QColor fc=QColorDialog::getColor(Qt::white,this,"Choose a background color");
    if(fc.isValid())
    {
        ui->textEdit->setTextBackgroundColor(fc);
    }
}
