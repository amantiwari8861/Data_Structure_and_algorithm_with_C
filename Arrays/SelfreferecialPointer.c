#include<stdio.h>
#include<string.h>
int main()
{
    struct Employee  //blueprint
    {
        int id;
        char name[20];
        char phoneNo[13];
        char gender;
        float salary;
    }student;
    
    struct Employee stu1;

    student.id=100;
    student.gender='M';
    // student.name="Aman";
    strcpy(student.name,"Aman Tiwari");
    strcpy(student.phoneNo,"+919891062743");
    student.salary=2.47;

    stu1.id=100;
    stu1.gender='M';
    // stu1.name="Aman";
    strcpy(stu1.name,"Aman Tiwari");
    strcpy(stu1.phoneNo,"+919891062743");
    stu1.salary=2.47;


    printf("Id=%d Name=%s phoneNo=%s gender=%c salary=%f \n",student.id,student.name,student.phoneNo,student.gender,student.salary);
    printf("Id=%d Name=%s phoneNo=%s gender=%c salary=%f \n",stu1.id,stu1.name,stu1.phoneNo,stu1.gender,stu1.salary);

    // struct test
    // {
    //     char ch;
    // };
    // struct test t1;
    // t1.ch='M';
    // printf("%c",t1.ch);

    return 0;
}
