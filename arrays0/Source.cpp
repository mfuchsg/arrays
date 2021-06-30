#include<iostream>
using namespace std;

#define tab "\t"
#define h
//#define sr

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef sr
	int a = 0;
	int sum = 0;
	const int SIZE = 5;
	int arr[SIZE];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{

		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];

	}
	a = sum / (SIZE);
	cout << "Сумма: " << sum << endl;
	cout << "Среднее арифмитическое: " << a << endl;

	int max = arr[SIZE];
	for (int i = SIZE - 1; i > 0; i--)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Максимально число: " << max << endl;
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Минимальное число: " << min << endl;
#endif // sr

#ifdef h
	int n;
	int const SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Введите на сколько сдвинуть массив: "; cin >> n;
	int a;
	a = SIZE - n;


	for (int i = n - 1; i < SIZE; i++)
	{
		cout << " " << arr[i] << " ";
	}
	int b;
	b = SIZE - a;
	for (int i = 0; i < b; i++)
	{
		if (arr[i] == n)cout << "";
		else cout << " " << arr[i];

	}
	cout << endl;
#endif // h

}