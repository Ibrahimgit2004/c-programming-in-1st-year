#include<stdio.h>
int main()
{
   int n,row,col;

   printf(" enter n=");
   scanf("%d", &n);

   for(row=1; row<=n; row++)
   {

        for(col=1; col<=n; col++)
       {
           if(row==1||col==1||row==n||col==n)
           printf("*", col);
           else
        printf(" ");
       }
       printf("\n");
   }






}
