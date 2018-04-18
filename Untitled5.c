#include<stdio.h>

int main()
{
    char name[50];
    int i=0;
    while(name[i]=getch())
    {
        if(name[i]==27)
        {
            goto a;
            break;
        }
        i++;
    }
    a: printf("Exit Name\n");
    return 0;
}
