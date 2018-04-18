#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
struct gip{
char beta[5];
char lamda[10];
};
struct goku{
int alpha;
char ch[50];
struct gip student;
};

int main()
{
    struct goku malware;
    printf("Insert something : ");
    gets(malware.student.lamda);
    printf("\n %s",malware.student.lamda);

    int x[4]={3,4,5,6};
    char ch[4];
    int i=0;
    for(;i<4;i++){
        ch[i]=(x[i]+48);
    }
    for(i=0;i<4;i++)
        printf(" %c\n",ch[i]);
}
