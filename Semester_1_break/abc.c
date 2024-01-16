#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char x[100]="Shafeen",i=0,count=0,y[100],end;
    printf("Enter your name to write it backwards : ");
    gets(x);
    while (x[i]!='\0')
    {
        count++;
        i++;
        end = count--;
    }
    
    for (int i = 0; i <count && i >= 0; i++)
    {
        x[i]=y[end];
        end--;
    }
    x[i]='\0';
    printf("Name is %s",y);
    
    
    return 0;
}
