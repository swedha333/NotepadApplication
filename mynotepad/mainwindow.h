#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionQuit_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();





    void on_actionSelect_Font_triggered();



    void on_actionBold_2_triggered();

    void on_actionItalic_2_triggered();

    void on_actionUnderline_2_triggered();

    void on_actionFont_BG_triggered();

    void on_actionFont_color_triggered();

    void on_actionPrint_triggered();

    void on_actionAbout_QT_triggered();

private:
    Ui::MainWindow *ui;
     QString currentFile;
};
#endif // MAINWINDOW_H
