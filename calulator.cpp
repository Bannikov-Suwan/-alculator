#include <iostream>
using namespace std;

int Summa (int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int Vichitanie (int a, int b)
{
	int c;
	c = a - b;
	return c;
}

int Umnojenie (int a, int b)
{
	int c;
	c = a * b;
	return c;
}

float Delenie (int a, int b)
{
	float c;
	c = a / b;
	return c;
}
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
					cout << Summa (a, b) << endl;
					break;
				}
			case 2:
				{
					cout << Vichitanie (a, b) << endl;
					break;
				}
			case 3:
				{
					cout << Umnojenie (a, b) << endl;
					break;
				}
			case 4:
				{
					cout << Delenie (a, b) << endl;
					break;
				}
		}

	system ("pause");
	return 0;

}
