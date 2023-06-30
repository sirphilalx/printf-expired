#include <stdio.h>
#include "main.h"

int main(void)
{
    int len1, len2;

    len1 = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len1, len1);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len1 = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len1);
    printf("Len:[%d]\n", len2);

    return 0;
}

