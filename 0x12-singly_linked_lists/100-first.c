#include <stdio.h>

/**
 * runmain - insert the constructor atrribute to runmain()
 * so as to be executed before main()
 */
void runmain(void) __attribute__ ((constructor));

/**
 * runmain - insertion of runmain
 */
void runmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
