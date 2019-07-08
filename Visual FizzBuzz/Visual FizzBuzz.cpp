// Visual FizzBuzz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void setColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
	const unsigned char OUTPUT_SYMBOL = 219; 
	
	const short NOPE = 0;		//Ни то, ни другое
	const short FIZZ = 12;		//Red
	const short BUZZ = 10;		//Green
	const short FIZZBUZZ = 14;	//Red + Green = Yellow (Hi RGB :D)

	unsigned short text_color;
    
	for (int i = 1; i <= (120 * 30); i++) // 120*30 - Win10 console size 
	{
		text_color = (i % 15 == 0) ? FIZZBUZZ : ((i % 3 == 0) ? FIZZ : ((i % 5 == 0) ? BUZZ : NOPE));
		setColor(text_color, 0);
		cout << OUTPUT_SYMBOL;
	}

	setColor(15, 0);
	return 0;
}

