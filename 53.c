 #include<stdio.h>
 int myfunction(int x,int y)
  {
    return x+y;
  }
 int main()
  { 
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);
    int result= myfunction(a,b);
    printf("Result is =%d",result);
  

    return 0;
  }
