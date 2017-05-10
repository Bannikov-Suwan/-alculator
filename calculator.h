#pragma once
#include <iostream>
#include <math.h>
#include <windows.h>
#include <iomanip>
#include "calculator.h"
bool ShowMenu();    //показ меню

void Error();       //сообщение об ошибке
void Sum();         //сложение
void Sub();         //вычитание
void Mul();         //умножение
void Div();         //деление
void Sqrt();        //квадратный корень
void Radical();     //корень любой степени
void Power();       //возведение в степень