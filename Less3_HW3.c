#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>

int main(int argc, char **argv)
{
	 setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    int a, b, diff;
    //printf("Please enter two type  int numbers a,b with spaces!\n");
    scanf("%d%d", &a, &b);
    diff = (a-b);
    
    printf("%d\n",diff);

	return 0;
}

