#include <iostream>
#include <limits>

void showWorkSchedule() {
    std::cout << "\nРегламент рабочего времени:\n"
              << "Лаборант кабинета ИКТ на 0,5 ставки обязан отрабатывать "
                 "20 часов в неделю.\n";
}

void showSoftwareCheck() {
    std::cout << "\nПроверка программного обеспечения:\n"
              << "Ежедневно до начала занятий лаборант проверяет "
                 "работоспособность программного обеспечения на всех ноутбуках кабинета.\n";
}

void showResponsibility() {
    std::cout << "\nМатериальная ответственность:\n"
              << "Лаборант отвечает за сохранность имущества кабинета, "
                 "бережно обращается с оборудованием и сообщает о неисправностях.\n";
}

int main() {
    int choice = 0;

    std::cout << "Информационный бот: обязанности лаборанта кабинета ИКТ\n";

    while (true) {
        std::cout << "\nМеню:\n"
                  << "1. Регламент рабочего времени\n"
                  << "2. Проверка программного обеспечения\n"
                  << "3. Материальная ответственность\n"
                  << "4. Завершить ознакомление и пройти контроль\n"
                  << "Выберите пункт меню: ";

        if (!(std::cin >> choice)) {
            std::cout << "Введите число от 1 до 4.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
        case 1:
            showWorkSchedule();
            break;
        case 2:
            showSoftwareCheck();
            break;
        case 3:
            showResponsibility();
            break;
        case 4: {
            std::cout << "\nОсновные обязанности лаборанта кабинета ИКТ:\n";
            showWorkSchedule();
            showSoftwareCheck();
            showResponsibility();

            int answer = 0;
            do {
                std::cout << "\nСколько часов в неделю обязан отрабатывать лаборант на 0,5 ставки? ";
                if (!(std::cin >> answer)) {
                    std::cout << "Введите число.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    answer = 0;
                } else if (answer != 20) {
                    std::cout << "Неверно. Попробуйте еще раз.\n";
                }
            } while (answer != 20);

            std::cout << "Верно! Ознакомление завершено.\n";
            return 0;
        }
        default:
            std::cout << "Нет такого пункта. Выберите число от 1 до 4.\n";
        }
    }
}
