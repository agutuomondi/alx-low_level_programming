#include <stdio.h>
#include "lists.h"

void first(void)__attribute__((constructor));

 /**
  *  first - function that runs before main
  *  function is executed.
  */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("! bore my house upon my back!\n");
}
