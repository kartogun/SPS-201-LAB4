#include <iostream>
#include <cmath> // для sqrt
using namespace std;

int main() {
    int choice;
    cout << "Оберіть завдання (1-5):\n";
    cout << "1. Ціна гри зі знижкою 15%\n";
    cout << "2. Обчислення віку за роком народження\n";
    cout << "3. Евклідова відстань між двома точками\n";
    cout << "4. Обчислення вартості товару зі знижкою\n";
    cout << "5. Сума цифр тризначного числа\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int originalPrice = 450;
        float discount = 0.15f;
        int finalPrice = originalPrice - (int)(originalPrice * discount);
        cout << "Ціна зі знижкою: " << finalPrice << " грн" << endl;
        break;
    }
    case 2: {
        int birthYear, currentYear;
        cout << "Введіть рік народження: ";
        cin >> birthYear;
        cout << "Введіть поточний рік: ";
        cin >> currentYear;
        int age = currentYear - birthYear;
        cout << "Вік: " << age << " років" << endl;
        break;
    }
    case 3: {
        float x1, y1, x2, y2;
        cout << "Введіть координати першої точки (x1 y1): ";
        cin >> x1 >> y1;
        cout << "Введіть координати другої точки (x2 y2): ";
        cin >> x2 >> y2;
        float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        cout << "Відстань між точками: " << distance << endl;
        break;
    }
    case 4: {
        float price, discountPercent;
        cout << "Введіть вартість товару: ";
        cin >> price;
        cout << "Введіть відсоток знижки: ";
        cin >> discountPercent;
        float finalPrice = price - (price * discountPercent / 100);
        cout << "Кінцева вартість: " << finalPrice << endl;
        break;
    }
    case 5: {
        int number;
        cout << "Введіть тризначне число: ";
        cin >> number;
        if (number >= 100 && number <= 999) {
            int sum = (number / 100) + (number / 10 % 10) + (number % 10);
            cout << "Сума цифр: " << sum << endl;
        }
        else {
            cout << "Це не тризначне число." << endl;
        }
        break;
    }
    default:
        cout << "Невірний вибір." << endl;
    }

    return 0;
}
