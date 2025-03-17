#include <QApplication>
#include <QLabel>

int main (int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label("Trocola");
    label.show();
    
    return app.exec();
}

