
#include<stdio.h>
#include<stdlib.h>

struct stud
{
    int roll;
    char name[10];
}*ptr[3];

int main()
{
    int i;

    printf("Enter the Student Details : ");
    for(i=0; i<3; i++)
    {
        ptr[i] = (struct stud *) malloc(sizeof(struct stud));

        printf("\nEnter the Roll Number : ");
        scanf("%d",&ptr[i]->roll);
        printf("\nEnter the Name : ");
        scanf("%s",ptr[i]->name);
    }

    printf("\nStudent Details are : ");

    for(i=0; i<3; i++)
    {
        printf("\nRoll Number : %d",ptr[i]->roll);
        printf("\nName : %s",ptr[i]->name);
    }
    printf("\n");

    return(0);
}
