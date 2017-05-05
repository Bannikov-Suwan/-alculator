#include <windows.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool done = 0;

bool ShowMenu();

void Error ();
void Sum ();
void Sub ();
void Mul ();
void Div ();
void Sqrt ();
void Radical ();
void Power ();

int main ()
{
	setlocale (0,"");
	
		while (!done)
		{
			done = ShowMenu();
		}
	return 0;
}

bool ShowMenu()
{
	short menu;
	
	cout << "1. Сложение\n 2.Вычитание\n 3.Умножение\n 4. Деление\n 5. Квадратный корень\n";
	cout << "6. Корень любой степени\n 7. Возведение в степень\n 8. Выход\n";
	
	cin >> menu;
		if (menu==1)
		{
			Sum();
		}
		else if (menu==2)
		{
			Sub();
		}
		else if (menu==3)
		{
			Mul();
		}
		else if (menu==4)
		{
			Div();
		}
		else if (menu==5)
		{
			Sqrt();
		}
		else if (menu==6)
		{
			Radical();
		}
		else if (menu==7)
		{
			Power();
		}
		else if (menu==8)
		{
			return true;
		}
		else
		{
			Error();
		}	
}

void Error ()
{
	cout << "Что-то неправильно ввели, повторите! " << endl;
}

void Sum ()
{
	int number;
	cout << "Введите количество чисел: ";
	cin >> number;
	double * s = new double [number];
	double answer = 0;
		for (int i=0; i < number; i++)
		{
			cout << "Введите " << i+1 << "числа: ";
			cin >> s[i];
			answer += s[i];
		}
		for (int i=0; i < number-1; i++)
		{
			cout << setprecision(8) << s[i] << " + ";
			cout << setprecision(8) << s[number-1] << " = " << setprecision(8) << answer << endl;
			delete []s;
		}
}

void Sub()
{
	double a, b;
	cout << "Введите уменьшаемое: ";
	cin >> a;
	cout << "Введите вычитаемое: ";
	cin >> b;
	cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
}

void Mul()
{
	int number;
	cout << "Введите количество множителей: ";
	cin >> number;
	double * s = new double [number];
	double answer = 1;
		for (int i=0; i < number; i++)
		{
			cout << "Введите " << i+1 << "множитель: ";
			cin >> s[i];
			answer *=s[i];
		}
		for (int i=0; i < number - 1; i++)
		{
			cout << setprecision(8) << s[i] << " * ";
			cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
			delete[]s;
		}
}

void Div ()
{
	double a, b;
	cout << "Введите делимое: ";
	cin >> a;
	cout << "Введите делитель: ";
	cin >> b;
	cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt ()
{
	double a;
	cout << "Введите число, из которого надо извлечь квадратный корень: ";
	cin >> a;
	cout << "sqrt (" << a << " ) = " << sqrt(a) << endl;
}

void Radical ()
{
	double a, b;
	cout << "Введите число, из которого надо извлечь корень: ";
	cin >> a;
	cout << "Корень какой степени надо извлечь?: ";
	cin >> b;
	cout << "Корень " << b << " степень из числа" << a << " равен " << pow (a,1/b) << endl;
}

void Power()
{
	double a, b;
	cout << "Введите основание степени: ";
	cin >> a;
	cout << "Введите показатель степени: ";
	cin >> b;
	cout << a << " ^ " << b << " = " << pow (a, b) << endl;
}

















