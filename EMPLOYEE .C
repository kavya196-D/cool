#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int id;
    int salary;
} Employee;
int main()
{
    int i, n=2;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].Name);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        printf("\n");
    }
    printf("------------ All Employees Details ------------\n");
    for(i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].Name);
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
        printf("\n");
    }
    return 0;
}
 
OUTPUT:

Enter 2 Employee Details
Employee 1:
Name:kavya
id:1
salary:80595

Employee 2:
Name:Devi
id:2
salary:90528
------------All Employees Details--------------
Name:kavya
id:1
salary:80595

Name:Devi
id:2
salary:90528





