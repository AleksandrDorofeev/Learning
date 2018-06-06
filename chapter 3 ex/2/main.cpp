#include <iostream>

using namespace std;

int main() {
    double sel, temp, res;

        cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта,\n"
                "2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
        cin >> sel;

        if(sel == 1) {
            cout << "Введите температуру по Фаренгейту: ";
            cin >> temp;
            res = (temp - 32) / 1.8;
            cout << "Значение по Цельсию: ";
            cout << res << endl;
        }
        if(sel == 2) {
            cout << "Введите температуру по Цельсию: ";
            cin >> temp;
            res = (temp * 1.8) + 32;
            cout << "Значение по Фаренгейту: ";
            cout << res << endl;
        }

    return 0;
}