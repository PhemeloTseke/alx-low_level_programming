#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10 + '0'));
}
putchar('\n');
return (0);
}
