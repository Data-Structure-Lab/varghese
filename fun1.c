#include<stdio.h>

void myfunction(int a)
 {
   printf("a in fun1 is%d\n",a);
   a=55;
   printf("\na in fun2 is%d",a);
 }

 void main()
 {
  int a=3;
  printf("\na in main2 =%d",a);
  myfunction(a);
  printf("\na in main2 = %d",a);
 }

