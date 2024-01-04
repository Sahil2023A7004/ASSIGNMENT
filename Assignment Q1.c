 #include<stdio.h>
#include<conio.h>

 void main()
 {
  int arr[20],i,j, size;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  printf("Enter those elements: ");
  for(i=0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("Duplicate elements are these: \n");
  for(i=0; i<size; i++)
   {
    for(j=i+1;j<size;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n",arr[i]);
    }
    }
    }
  getch();
    } 
