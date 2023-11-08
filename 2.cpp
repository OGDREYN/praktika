using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(0, "");
    int n;
    int sum = 0;

    cout << "Введите число n: ";
    cin >> n;

    // Проверка на положительного числа
    if (n <= 0)
    {
        cout << "Пожалуйста, введите положительное число.\n";
    }
    else
    {
        // Вычисление суммы чисел от 1 до n
        for (int i = 1; i <= n; ++i)
        {
            sum += i;
        }

        cout << "Сумма чисел от 1 до " << n << " равна: " << sum << endl;
    }

    return 0;
}
