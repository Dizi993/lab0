#include <stdio.h>
#include  <locale.h>
#include <stdlib.h> 
void name()
{
	puts("*******************************************\n*                                         *\n* ����: ���������� ����������� ���������� *\n*      �������� ������� �.�               *\n*                                         *\n*******************************************");

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
	puts("������� Enter ��� �����������...");

	getchar(); // �������� ������� Enter

	puts("����������� ���������");
	name();
	date();
	return 0;
}