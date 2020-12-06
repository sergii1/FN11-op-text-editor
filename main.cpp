#include <QApplication>
#include "texteditor.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextEditor TE;
    TE.showMaximized();
    return a.exec();
}
