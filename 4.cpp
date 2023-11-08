#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int ARRSIZE = 15;

	int arr[ARRSIZE]{
		1, 21, 3, -4, 4, 8, 83, 23, 5, 3, 6, 8, 48, 6, 9
	};

	int minNum = 0;
	int maxNum = 0;
	int minNumIndex = 0;
	int maxNumIndex = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		if (arr[i] < minNum || i == 0)
		{
			minNumIndex = i;
			minNum = arr[i];
		}

		if (arr[i] > maxNum || i == 0)
		{
			maxNumIndex = i;
			maxNum = arr[i];
		}

	}

	cout << "Минимальное число будет: " << minNum << ",и его индекс" << minNumIndex << endl;
	cout << "Максимальное число будет: " << maxNum << ",и его индекс" << maxNumIndex << endl;

}
	}

	cout << "Минимальное число будет: " << minNum << endl;
	cout << "Максимальное число будет: " << maxNum << endl;

}
