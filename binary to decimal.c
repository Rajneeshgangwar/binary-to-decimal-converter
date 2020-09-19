#include<stdio.h>
#include<conio.h>
void main()
{
    int rem,num,decimal_num=0,base=1;
    printf("printf the binary number\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        decimal_num=decimal_num+rem*base;
        num=num/10;
        base=base*2;
    }
      printf("decimal of the number is %d",decimal_num);
   getch();
}



