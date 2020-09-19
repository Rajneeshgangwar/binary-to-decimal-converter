#include<stdio.h>
#include<conio.h>
void main()
{
  int num,a[50],i;
  printf("enter the number\n");
  scanf("%d",&num);
  for(i=0;num>0;i++)
   {
      a[i]=num%8;
      num=num/8;

      }
printf("the octal of the number is\n");
  for(i=i-1;i>=num;i--)
  {
    printf("%d",a[i]);
   }
getch();
}
