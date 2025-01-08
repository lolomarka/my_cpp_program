#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label("Hello, World!"); // Создаем виджет QLabel с текстом
    label.setAlignment(Qt::AlignCenter); // Выравниваем текст по центру
    label.resize(400, 200); // Устанавливаем размер окна
    label.show(); // Отображаем окно

    return app.exec(); // Запускаем главный цикл приложения
}
