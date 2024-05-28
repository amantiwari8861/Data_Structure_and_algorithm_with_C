#include <stdio.h>
struct Employee
{
    int id;
    char gender;
    char name[20];
    float salary;
};
int main()
{
    struct Employee temp,empArr[100];
    int len=0;
    char choice;
    do
    {
        printf("do u want to add student ?  ");
        fflush(stdin);
        scanf("%c", &choice);

        if (choice == 'Y' || choice == 'y')
        {
            printf("enter id:");
            scanf("%d%*c", &temp.id);
            printf("enter Name:");
            scanf("%[^\n]s", &temp.name);
            fflush(stdin);
            printf("enter gender:");
            scanf("%c", &temp.gender);
            printf("enter salary:");
            scanf("%f", &temp.salary);

            empArr[len++]=temp;
        }

    } while (choice == 'y' || choice == 'Y');

    printf("\nAll employees data are :\n");
    for (int i = 0; i < len; i++)
    {
        printf("Employee Id :%d Name:%s Gender:%c Salary:%f \n",empArr[i].id,empArr[i].name,empArr[i].gender,empArr[i].salary);
    }
    return 0;
}
