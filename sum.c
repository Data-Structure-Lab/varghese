#include<stdio.h>
int main()
{
  double number,sum=0;
  do
  {
      printf("Enter a Number");
      scanf("%lf",&number);
      sum +=number;
   }

while(number!=0.0);
printf("sum=%lf",sum);
return 0;
}  
