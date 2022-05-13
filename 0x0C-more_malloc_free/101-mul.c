#include"main.h"
#include <stdio.h>
#include <stdlib.h>

void print_str(char *);

int main(int argc, char *argv[])
{
	long num1,num2,result;
	/*char *err="Error\n";*/
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
       num1=atoi(argv[1]);
       num2=atoi(argv[2]);
       if (num1 == 0 || num2 == 0)
       {
	
        	printf("Error\n");
                exit(98);
	}
	
	 result=num1*num2;
	 printf("%ld\n",result);
	 return (0); 
}
void print_str(char *str)
{
   while(*str)
   {
   _putchar(*str);
   str++;
}
}


