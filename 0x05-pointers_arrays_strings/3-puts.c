#include "main.h"

/**
 * -puts - prints a string
 *  @str: string to be printed
 *  Return: string
 */
void _puts(char *str)
{
      int i;

      for (i = 0; str[i] != '\0'; i++)
      {
	   _putchar(str[i]);
      }
          -putchar('\n');
}    	  
