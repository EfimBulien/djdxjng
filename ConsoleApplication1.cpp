#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double matrix[3][5];
    double totalSum = 0;
    double sum = 0;

    cout << "Введите элементы матрицы 3x5\n" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Строка " << i + 1 << "\n";
        for (int j = 0; j < 5; j++) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
            totalSum += matrix[i][j];
        }
        cout <<  "Средние арифметическое строки " << i + 1 << ": " << sum / 5 << endl;
        sum = 0;
    }
    
    cout << "\nСреднее арифметическое всех строк: " << totalSum / 15 << endl;
    return 0;
}