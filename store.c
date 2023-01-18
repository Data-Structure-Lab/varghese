#include<stdio.h>
void main()
{ 
   int a[3]={1,2,3};
   int b[10],i;
   printf("Enter values of array");
   for(i=0;i<10;i++)
       {
           b[i]=i;
       }
   printf("Values ina[2]%d",a[2]);
   printf("values in array");
   for(i=0;i<10;i++)
       {
          printf("%d",b[i]);
       }
}
