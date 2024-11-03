#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>

int main(int argc, char **argv)
{
	 setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    int number,  tens, hund, units, mult;
    //float aver;
    //printf("Please enter one number of the type  int  a!\n");
    scanf("%d", &number);
    units =  number%10;
	tens  =  (number/10)%10;
	hund  =  number/100;
    mult = tens*hund*units;
    printf("%d\n",mult);

	return 0;
}

