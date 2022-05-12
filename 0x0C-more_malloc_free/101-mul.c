#include "main.h"
#include <stdio.h>
# include <stdlib.h>

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */
void print_str(char *);

int main(int argc, char *argv[])
{
	long num1, num2,result;
	char *err ="error\n";
	if (argc !=3)
	{
		print_str(err);
		exit(98);
	}
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	if (num1==0 || num2==0)
		print_str(err);
	        exit(98);
}
result=num1*num2;
printf("%d\n",result);
return(0);
}
void print_str(char *)
{
	while(*str)
		_putchar(*str)
			str++;
}
}

