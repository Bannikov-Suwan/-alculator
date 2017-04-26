#include <iostream>
using namespace std;

int Sum (int , int );

int Sub (int , int );

int Mul (int , int );

float Del (float, float );

int main ()
{
	setlocale (0,"");
	int a, b, c;
	cout << "Введите первое и второе число: " ;
		cin >> a >> b;
	cout << endl;
	int result;
	cout << "1 = +    2 = -   3 = *   4 = /" << endl;
	cout << endl;
	cout << "Введите цифру знака : ";
     	cin >> result;
		switch (result)
		{
			case 1:
				{
					cout << Sum (a, b) << endl;
					break;
				}
			case 2:
				{
					cout << Sub (a, b) << endl;
					break;
				}
			case 3:
				{
					cout << Mul (a, b) << endl;
					break;
				}
			case 4:
				{
					cout << Del (a, b) << endl;
					break;
				}
		}

	system ("pause");
	return 0;

}

int Sum (int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int Sub (int a, int b)
{
	int c;
	c = a - b;
	return c;
}

int Mul (int a, int b)
{
	int c;
	c = a * b;
	return c;
}

float Del (int a, int b)
{
	float c;
	c = a / b;
	return c;
}
