#include <QCoreApplication>
#include <QObject>
#include <QTextStream>
#include <QTranslator>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QTextStream out_stream(stdout);
    QTranslator translator;
    bool result = translator.load("trans_id");

    if (!result) {
        out_stream << "ERROR: Failed to load the translatation file" << endl;
    } else {
        a.installTranslator(&translator);
    }

    QString early_msg(QObject::tr("That's life."));
    QString msg1 = QObject::tr("Hello, my friend!");
    QString msg2 (QObject::tr("Goodbye!"));

    out_stream << early_msg << '\n';
    out_stream << msg1 << '\n' << msg2 << endl;

    return a.exec();
}

