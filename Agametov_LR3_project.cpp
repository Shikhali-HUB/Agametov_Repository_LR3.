#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int choice;
    int X,N;
    do {
        cout << "Меню:\n";
        cout << "Task 1. Ввести целое трехзначное число X\n";
        cout << "Task 2. Ввести цифру N (которая меньше числа разрядов числа X)\n";
        cout << "Task 3. Найти первую цифру числа X\n";
        cout << "Task 4. Найти N-ю цифру числа X (цифры нумеруются справа налево)\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Git_A(X);
                break;
            case 2:
                Git_n(N);
                break;
            case 3:
                Git_x(X);
                break;
            case 4:
                Git_a(X,N);
                break;
            case 0:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Некорректный выбор. Попробуйте снова.\n";
        }

    } while (choice != 0);

    return 0;
}