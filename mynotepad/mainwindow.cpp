#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFont>
#include <QFontDialog>
#include <QApplication>
#include <QColorDialog>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>

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


void MainWindow::on_actionNew_triggered()
{
       currentFile.clear();
        ui->textEdit->setText(QString());
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
     ui->textEdit->redo();
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
        QFile file(fileName);
        currentFile = fileName;
        if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
            return;
        }
        setWindowTitle(fileName);
        QTextStream in(&file);
        QString text = in.readAll();
        ui->textEdit->setText(text);
        file.close();
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName;
        // If we don't have a filename from before, get one.
        if (currentFile.isEmpty()) {
            fileName = QFileDialog::getSaveFileName(this, "Save");
            currentFile = fileName;
        } else {
            fileName = currentFile;
        }
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }
        setWindowTitle(fileName);
        QTextStream out(&file);
        QString text = ui->textEdit->toPlainText();
        out << text;
        file.close();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
       QFile file(fileName);

       if (!file.open(QFile::WriteOnly | QFile::Text)) {
           QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
           return;
       }
       currentFile = fileName;
       setWindowTitle(fileName);
       QTextStream out(&file);
       QString text = ui->textEdit->toPlainText();
       out << text;
       file.close();
}

void MainWindow::on_actionSelect_Font_triggered()
{
    bool fontSelected;
       QFont font = QFontDialog::getFont(&fontSelected, this);
       if (fontSelected)
           ui->textEdit->setFont(font);
}

void MainWindow::on_actionBold_2_triggered()
{
    ui->textEdit->setFontWeight(QFont::Bold);

}

void MainWindow::on_actionItalic_2_triggered()
{
    ui->textEdit->setFontItalic(true);

}

void MainWindow::on_actionUnderline_2_triggered()
{
    ui->textEdit->setFontUnderline(true);
}

void MainWindow::on_actionFont_BG_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Color");
      if(color.isValid()) {
          ui->textEdit->setTextBackgroundColor(color);
        }
}

void MainWindow::on_actionFont_color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Color");
     if(color.isValid()) {
         ui->textEdit->setTextColor(color);
       }
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
      printer.setPrinterName("desierd printer name");
      QPrintDialog dialog(&printer,this);
      if(dialog.exec() == QDialog::Rejected) return;
      ui->textEdit->print(&printer);
}

void MainWindow::on_actionAbout_QT_triggered()
{
    QMessageBox::about(this, tr("About MDI"),
                    tr("Notepad in QT C++ By CppBuzz.com. Users are allowed to download & modify it."
                       "text editor using QtWidgets"));
}
