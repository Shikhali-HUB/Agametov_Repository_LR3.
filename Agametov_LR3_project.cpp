#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Git_A(int X) {
    /*do {
        cout << "Введите целое трехзначное число X: ";
        cin >> X;
        if (X < 100 || X > 999) {
            cout << "Ошибка: число должно быть трехзначным. Попробуйте еще раз.\n";
        }
    } while (X < 100 || X > 999);
*/
}

int Git_n(int N) {
    /*do {
        cout << "Введите цифру N (меньше числа разрядов числа X, т.e. от 1 до 3): ";
        cin >> N;
        if (N < 1 || N > 3) {
            cout << "Ошибка: N должно быть в диапазоне от 1 до 3. Попробуйте еще раз.\n";
        }
    } while (N >= 1 || N < 3);*/
}
int Git_x(int X) {
    // int first = X / 100;
    // cout << "Первая цифра числа X: " << first << endl;
}

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