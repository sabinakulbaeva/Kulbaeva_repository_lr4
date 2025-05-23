#include <iostream>
#include <cmath>

using namespace std;

// Прототипы методов
void inputNumbers(double& x, double& y, double& z);
double sumFractionalParts(double x, double y, double z);
int sumIntegerParts(double x, double y, double z);
void displayMenu();
char getUserChoice();

int main() {
    // Переменные для хранения введенных чисел
    double x, y, z;
    
    while (true) {
        displayMenu(); // Отображение меню

        char choice = getUserChoice(); // Получаем выбор пользователя

        switch(choice) {
            case '1':
                inputNumbers(x, y, z); // Ввод чисел
                break;
            case '2':
                cout << "Сумма дробных частей: " << sumFractionalParts(x, y, z) << endl;
                break;
            case '3':
                cout << "Сумма целых частей: " << sumIntegerParts(x, y, z) << endl;
                break;
            case '0':
                return 0; // Выход из программы
            default:
                cout << "Неверный ввод! Попробуйте снова." << endl;
                break;
        }
    }
}

// Функция ввода чисел
void inputNumbers(double& x, double& y, double& z) {
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число z: ";
    cin >> z;
}

// Функция нахождения суммы дробных частей
double sumFractionalParts(double x, double y, double z) {
    double fractionalPartX = modf(x, &x);
    double fractionalPartY = modf(y, &y);
    double fractionalPartZ = modf(z, &z);
    return fractionalPartX + fractionalPartY + fractionalPartZ;
}

// Функция нахождения суммы целых частей
int sumIntegerParts(double x, double y, double z) {
    int integerPartX = static_cast<int>(x);
    int integerPartY = static_cast<int>(y);
    int integerPartZ = static_cast<int>(z);
    return integerPartX + integerPartY + integerPartZ;
}

// Функция отображения меню
void displayMenu() {
    cout << "Выберите действие:" << endl;
    cout << "1. Ввести числа" << endl;
    cout << "2. Найти сумму дробных частей" << endl;
    cout << "3. Найти сумму целых частей" << endl;
    cout << "0. Выход" << endl;
}

// Функция получения выбора пользователя
void getUserChoice() {
   //реализуется Сашей
}