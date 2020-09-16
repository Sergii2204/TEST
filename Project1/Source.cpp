#include<iostream>
using namespace std;

//void Swap(int&a, int&b)
//{
//	int c;
//	c = a;
//	a = b;
//	b = c;
//}

//void Arr(int arr[], int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 20 +5;
//	}
//	cout << endl;
//
//}
//
//void Arr1(int arr[], int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//int& Mindigit(int arr[], int SIZE )
//{
//	int index=0;
//	int min = arr[0];
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i ];
//			index = i;
//		}
//
//	}
//
//	return arr[index];
//}

bool Div(float a, float b, float &rez)
{
	if (b == 0)
	{
		return false;
	}
	rez = a / b;
	return true;
}

void main()
{
	/*int a = 10;
	int b = 5;
	Swap(a, b);
	cout << "a=" << a << "  " << "b=" << b << endl;*/


	/*int const SIZE = 5;
	int arr[SIZE];
	Arr(arr,SIZE);
	Arr1(arr,SIZE);
	int &min=Mindigit(arr, SIZE);
	min *= 2;
	Arr1(arr, SIZE);*/

	float a = 0, b = 0, rez = 0;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	Div(a, b, rez);
	cout << rez << endl;
	system("pause");
}