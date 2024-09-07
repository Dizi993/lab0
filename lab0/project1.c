#include <stdio.h>
#include  <locale.h>
#include <stdlib.h> 
void name()
{
	puts("*******************************************\n*                                         *\n* Тема: Разработка консольного приложения *\n*      Выполнил Копицын Д.А               *\n*                                         *\n*******************************************");

}
void date()
{
	puts(" _  _    _   _   _    _ ");
	puts(" _||_   | |  _| | |  |_ ");
	puts("|_ |_|  |_| |_  |_|  |_|");
}
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Нажмите Enter для продолжения...");

	getchar(); // ожидание нажатия Enter

	puts("Продолжение программы");
	name();
	date();
	return 0;
}