#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int ARRSIZE = 15;

	int arr[ARRSIZE]
	{
		5, 2, 4, -5, 6, 2, 53, 83, 7, 1, 3, 6, 32, 6, 12
	};

	int minNum = 0;
	int maxNum = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		if (arr[i] < minNum || i == 0) //проверка меншье минимального числа или выюирает число если 0
		{
			minNum = arr[i];
		}

		if (arr[i] > maxNum || i == 0) // проверка макс чиса или выбирает 0
		{
			maxNum = arr[i];
		}

	}

	cout << "Минимальное число будет: " << minNum << endl;
	cout << "Максимальное число будет: " << maxNum << endl;

}
