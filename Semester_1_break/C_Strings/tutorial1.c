#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *ptr="Hello World";
    char x[100];
    printf("%s","Hello World");
    printf("%s","Hello world"
    "\tHello worldd");
    printf("%s","\n Hello World" \
    "Hello world .c ");

    printf("\n%s",&ptr[2]);
    printf("\n\n Enter your name : ");
    gets(x);
    puts(x);
    // printf("%s",(*('e' + 1)));
    printf("\n %c",ptr[2]);

    return 0;
}
