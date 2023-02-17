/*
 * File: 9-print_comb.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single
 *        -digit numbers
 *
 * Return: Always 0.
*/
int main(void)
{
        int a;

        for (a = 0; a < 10; a++)
                putchar((a % 10) + '0' + ',' + ' ');

        putchar('\n');


        return (0);
}
