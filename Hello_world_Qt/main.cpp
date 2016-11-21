#include <QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    QPushButton hello("Hello,World");
    app.connect(&hello, SIGNAL(clicked()), &app,
                SLOT(quit()));
    hello.show();

    return app.exec();
}
