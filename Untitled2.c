#include <stdio.h>
#include <string.h>
void check(int *pass,int *num);
int main()
{
    char tempo[80];
    char name[100];
    int i;
    int *num;
    int arr[10];
a:
    system("cls");
    fflush(stdin);
    printf("\nEnter New Name: ");
    gets(tempo);
    printf("\nAre you okay with this modification?\n1. Yes\n2. No\nEnter choice: ");
    scanf(" %d",&i);
    if(i==1)
    {
        strcpy(name,tempo);
        printf("\n\nName is %s",name);
        printf("\nDone!!!!!");
        goto b;
    }
    else goto a;
b:
    printf("\n\n\tNext Form!!!");
    fflush(stdin);
    printf("\n\n\n Enter the value: ");
    for(i=0;i<10;i++)
        scanf(" %d",&arr[i]);
    printf("\n\n\n");
    for(i=0;i<10;i++)
        printf("%d  ",arr[i]);
    return 0;
}
void check(int *pass,int *num)
{
    int k=num;
    pass[k]=10;
    for(k=0;k<10;k++)
    printf("\n The variable is %d \n",pass[k]);
}
