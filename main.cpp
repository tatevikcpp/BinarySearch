#include <iostream>

void InitMas(int *mas, int size)
{
	int i = 0, j = 0, temp;
	for (int j = 1; j < 5; ++j)
	{
		for (int i = 0; i < 5 - j; ++i)
		{
			if (mas[i] > mas[i + 1])
			{

				int temp = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = temp;
			}
		}
	}
}


int BinarySearch(int *mas, int l, int r, int x)
{
	while (l <= r) {
		int i = l + (r - l) / 2;

		if (mas[i] == x)
			return i;

		if (mas[i] < x)
			l = i + 1;

		else
			r = i - 1;
	}

	return 0;
}

int main()
{
	int mas[5] = { 101, 57, 7, 80, 9 };
	InitMas(mas, 5);
	int x = 57;
	int result = BinarySearch(mas, 0, 5, x);
	(result == 0) ? std::cout << "Element is not present \n " : std::cout << "Element is present \n";

}

