#include<stdio.h>
#include<conio.h>
void main()
  {
      int rem,decimal=0,i,x=0,num,base=1;
   printf("enter any binary number\n");
   scanf("%d",&num);
      for(i=num;i>=0;i--)
       {
           rem=num%10;
           if(rem>=2)
           {
               x=1;
               break;
           }
           decimal=decimal+rem*base;
           num=num/10;
           base=base*2;
       }if(x==1)
       {
           printf("this is not the binary number\n");
       }
        if(x==0)
   {
    printf(" the decimal of the  numaber%d\n",decimal);
   }
getch();









}
