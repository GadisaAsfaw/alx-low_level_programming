#include <stdio.h>
#include "lists.h"
/*
 *In C if we want to write function that excute before or after main function
 * to perform some startup or cleanup operations we put attribute
 * (constructor attribute or destructor attribute respectively)
 *for the function.
 *Example:void print_first(void) __attribute__ ((constructor));
*/
/**
 *print_first - this function excutes before main function
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
