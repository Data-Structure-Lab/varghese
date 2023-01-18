#include<stdio.h>
int main()
{
   int arr[40],pos,i,size,value,num;
   printf("enter no of elements in array of students:");
   scanf("%d",&size);
   printf("enter %d elements are:",size);
   for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      arr[i+1]=arr[i];
   arr[pos-1]= value;
   printf("final array after inserting the value is");
   for(i=0;i<=size;i++)
      printf("%d \n",arr[i]);
printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);    
    if (pos >= i+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {   
        for (i = pos - 1; i < i -1; i++)  
        {  
            arr[i] = arr[i+1]; 
        }  
          printf (" \n The resultant array is: \n");   
        for (i=0;i<num-1;i++)  
        {  
            printf (" arr[%d] = ",i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
   
    
   return 0;
}
