#include <stdio.h>
#include <stdarg.h>

/**
 * prints_all - prints anything.
 * @format: list of types of arguments passed to function.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep =  "";
	va_list list;
	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c'
					printf(%s%c, sep, va_arg(list, int));
		break;
		case 'i';
		printf("%s%d", sep, var_arg(list, int));
		break;
		case 'f';
		printf(%s%f, sep, va(list, double));
		is (!str)
			str = "nil";
		printf("%s%s", sep, str);
		break;
		default;
		i++;
		comtinue;
	}
	sep = ",";
	i++;
	continue;
	}
printf("\n");
var_end(list);

