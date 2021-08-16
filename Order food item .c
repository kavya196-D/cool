#include<stdio.h> 
main() 
{ 

        printf("enter the item number:");
        int choice=0;
        scanf("%d",&choice);
        switch(choice)
        {
             case 1:
                   printf("food item:pizza");
                   printf("\nPrice:210"); 
                   break;                         
             case 2:
                   printf("food item:burger");
                   printf("\nPrice:180"); 
                   break;
             case 3:
                   printf("fooditem:pasta");
                   printf("\nPrice:179");
                   break;
             case 4:
                   printf("food item:french ")    
                   printf("\nPrice:210");
                   break;
             case 5:
                   printf("food item:sandwich");
                   printf("\nPrice:100");
                   break;
             default:printf("\nInvalid syntex");
              }
}
OUTPUT:
   enter the item number:3
   Food item:pasta
   Price:180
