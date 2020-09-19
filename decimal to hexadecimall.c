#include<stdio.h>
#include<conio.h>
void main()
{
  int num,a[50],i;
  printf("enter the number\n");
  scanf("%d",&num);
  for(i=0;num>0;i++)
   {
      a[i]=num%16;
      num=num/16;

   }


printf("the hexa decimal of the number is\n");
    for(i=i-1;i>=0;i--)
        if(a[i]==10)
     {
         printf("A");
     }else if(a[i]==11)
       {
           printf("B");
       }else if(a[i]==12)
       {
           printf("C");
       }else if(a[i]==13)
       {
           printf("D");
       }else if(a[i]==14)
       {
           printf("E");
       }else if(a[i]==15)
       {
           printf("F");
       }else if(a[i]<10)
       {
           printf("%d",a[i]);
       }
      getch();
   }


