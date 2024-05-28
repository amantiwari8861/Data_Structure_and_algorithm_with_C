#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char gender;
    char name[20];
    float salary;
};
int main()
{
    struct Employee emp1,emp2;
    emp1.id=100;
    emp1.gender='M';
    strcpy(emp1.name,"Aman Tiwari");
    emp1.salary=50000;

    printf("enter id:");
    scanf("%d%*c",&emp2.id);
    printf("enter Name:");
    scanf("%[^\n]s",&emp2.name);
    fflush(stdin);
    printf("enter gender:");
    scanf("%c",&emp2.gender);
    printf("enter salary:");
    scanf("%f",&emp2.salary);

    printf("Employee Id :%d Name:%s Gender:%c Salary:%f \n",emp1.id,emp1.name,emp1.gender,emp1.salary);
    printf("Employee Id :%d Name:%s Gender:%c Salary:%f \n",emp2.id,emp2.name,emp2.gender,emp2.salary);
    return 0;
}
