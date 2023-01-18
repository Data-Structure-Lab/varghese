#include<stdio.h>

int myfunction()
  {
    printf("i just got exicuted\n");
    return(5);
  }

int main()
  {
    int a;
     a=myfunction();
     printf("%d \n",a);
     return 0;
  }


