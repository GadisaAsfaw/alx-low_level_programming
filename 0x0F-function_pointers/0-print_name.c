#include "function_pointers.h"
/**
 *print_name - calls a function that prints name
 *@name: string name
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	/*(*f)(name);*/
	f(name);
}
