#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>

int main(int argc, char **argv)
{
	 setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    int a, b, c, sum;
    //printf("���������� ������� ��� ����� a,b,c ���� int � ���������!\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = (a + b + c);
    printf("%d+%d+%d=%d\n",a,b,c,sum);


	return 0;
}

