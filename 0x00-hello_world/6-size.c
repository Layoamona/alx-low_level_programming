#include <stdio.h>
/**
 *main - A program that prints the size of various computer types
 *Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %zu byte($)\n", sizeof(char));
printf("Size of an int: %zu byte($)\n", sizeof(int));
printf("Size of a long int: %zu byte($)\n", sizeof(long int));
printf("Size of a long long int: %zu byte($)\n", sizeof(long long int));
printf("Size of a float: %zu byte($)\n", sizeof(float));
return (0);
}
