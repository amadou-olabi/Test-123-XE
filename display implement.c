#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int num_choice_course;
char menu_tittle[50];
char t1[10][70],t2[10][70];

int getCourseChoice(int choice);
void loadCourseMenu(int *num,char *menu);

int main()
{
    int num_items;
    int choice=1;
    int option;
    scanf("%d",&option);

    if(option==1)
    {
        loadCourseMenu(&num_items,"Course Menu For Admin.txt");
        while(choice!=num_items)
        {
            choice = getCourseChoice(choice);
            switch(choice)
            {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            }
        }
    }
    else if(option==2)
    {
        loadCourseMenu(&num_items,"Course Menu For Student.txt");
        while(choice!=num_items)
        {
            choice = getCourseChoice(choice);
            switch(choice)
            {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            }
        }
    }
}

void loadCourseMenu(int *num,char *menu)
{
    /*
        This is the Menu function. It's displayed just after the Welcome Menu!!!!!
    */
    int i;
    strcpy(menu_tittle,menu);
    FILE *fp = fopen(menu,"r");
    fscanf(fp,"%d\n",&num_choice_course);
    *num = num_choice_course;
    for(i=0; i<num_choice_course; i++)
        fgets(t1[i],50,fp);
    for(i=0; i<num_choice_course; i++)
        fgets(t2[i],50,fp);

    fclose(fp);
}

int getCourseChoice(int choice)
{
    /*
        This is the function to permit us to use the arrows to make a selection!!!
    */
    char ch=10;
    while(ch!=13)
    {
        system("cls");
        printf("\n\n\n\t\t::::: %s :::::\n",menu_tittle);
        if(choice==1)
        {
            printf("\n\n\t\t   -->\t%s",t2[0]);
        }
        else printf("\n\n\t\t\t%s",t1[0]);

        if(choice==2)
        {
            printf("\n\n\t\t   -->\t%s",t2[1]);
        }
        else printf("\n\n\t\t\t%s",t1[1]);

        if(choice==3)
        {
            printf("\n\n\t\t   -->\t%s",t2[2]);
        }
        else printf("\n\n\t\t\t%s",t1[2]);

        if(choice==4)
        {
            printf("\n\n\t\t   -->\t%s",t2[3]);
        }
        else printf("\n\n\t\t\t%s",t1[3]);

        if(choice==5)
        {
            printf("\n\n\t\t   -->\t%s",t2[4]);
        }
        else printf("\n\n\t\t\t%s",t1[4]);

        if(choice==6)
        {
            printf("\n\n\t\t   -->\t%s",t2[5]);
        }
        else printf("\n\n\t\t\t%s",t1[5]);

        printf("\n\n\t      [ Use UP and DOWN arrow to select an option ]");
        ch = getch();
        if(ch == 72)
            choice--;
        else if(ch == 80)
            choice++;
        if(choice<1)
            choice = 1;
        else if(choice>num_choice_course)
            choice = num_choice_course;
    }
    return choice;
}
