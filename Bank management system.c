#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int main_exit;
void menu();
struct date{ 
    int month,day,year; 
    };
struct {
    char name[60]; 
    int acc_no,age; 
    char address[60]; 
    char citizenship[15]; 
    double phone; 
    char acc_type[10]; 
    float amt; 
    struct date dob;
    struct date deposit; 
    struct date withdraw;
    }add,upd,check,rem,transaction; 
float interest(float t,float amount,int rate)
{ 
    float SI; 
    SI=(rate*t*amount)/100.0;
    return (SI);
}
void fordelay(int j)
{   int i,k; 
    for(i=0;i<j;i++) 
    k=i;
} 
void new_acc() 
{ 
    int choice; 
    FILE *ptr; 
    ptr=fopen("record.dat","a+"); 
    account_no: system("cls"); 
    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):"); 
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year); 
    printf("\nEnter the account number:"); 
    scanf("%d",&check.acc_no); 
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF) 
    { 
        if (check.acc_no==add.acc_no) 
          {printf("Account no. already in use!"); 
          fordelay(1000000000); 
          goto account_no;
          }
    }
