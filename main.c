#include<stdio.h>

struct Student
{
    int stud_id;
    int age;
    int marks;
};

int main()
{
    struct Student data[100];
    int n;
    printf("Enter the total  number of students:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the data of student %d:\n",i+1);
        scanf("%d  %d  %d",&data[i].stud_id,&data[i].age,&data[i].marks);
    }
    printf("data is valid if age is greater than 20 and marks btw 0 to 100");
    printf(" the students who got  admission:\n");
    for(i=0;i<n;i++)
    {
        if(data[i].age>20 && (65 <= data[i].marks <= 100))
            printf("Student id:%d  Age:%d  Marks:%d\n",data[i].stud_id,data[i].age,data[i].marks);
    }
    return 0;
}