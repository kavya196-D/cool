#include <stdio.h>

int main()  {

   int n,i,j;

   printf("Enter number of rows - ");

   scanf("%d",&n);

   for(i=1;i<=n;i++)   {

       for(j=0;j<2*i;j++)

           printf("%d",j%2);

       printf("\n");

   }

   return 0;

}

OUTPUT::

Enter number of rows -6

                01
                0101
                010101
                01010101
                0101010101
                010101010101
                
