#include<stdio.h>
#include<conio.h>
void main()
{
 int num,a[50],i;
 printf("enter the number\n");
 scanf("%d",&num);

 for(i=0;num>0;i++)
   {
       a[i]=num%2;
       num=num/2;

   }
printf("binary of the number\n");
  for(i=i-1;i>=num;i--)
   {
      printf("%d",a[i]);

   }
getch();
}
