#include "function_pointers.h"
/**
 *print_name - calls a function that prints name
 *@name: string name
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL){
		/*(*f)(name);*/
		f(name);
	}
}
