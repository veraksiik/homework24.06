#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> numbers;
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 41 - 20);
    }

    cout << "�������� ������: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int num) {return num <= 0; }), numbers.end());

    cout << "������ ����� �������� ������������� � �����: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());

    cout << "��������������� ������: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sortedNumbers(numbers.begin(), numbers.end());

    cout << "������ ������ � ���������������� �������: ";
    for (int num : sortedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
