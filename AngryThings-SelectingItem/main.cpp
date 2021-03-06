#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // ================= Calculate the QMainWindow =================
    QDesktopWidget wid;
    int screenWidth = wid.screen()->width();
    int screenHeight = wid.screen()->height();
    int width = screenWidth - 300;
    int height = screenHeight - 150;
    MainWindow w(width , height);
    // ================= Setting Windows Title and Icon =================
    w.setWindowTitle("AngryThings");
    w.setWindowIcon(QIcon("../angrything_img_src/object/Normal_Bird_1.png"));
    // set frame size
    w.setGeometry((screenWidth/2)-(width/2) , (screenHeight/2) - (height/2) , width , height);
    w.show();
    // Program Loop
    return a.exec();
}
