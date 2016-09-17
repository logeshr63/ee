#include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int r1,r2,i,n,flag,s;
 clrscr();
 printf("Enter start and End Range:");
 scanf("%d%d,&r1,r2");
 printf("All prime number from %d to%d\n",r1,r2);
 for(n=r1;n<=r2;n++)
 {
 flag=0;
 s=sqrt(n);
for(i=2;i<=s;i++)
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
printf("%5g",n);
}
getch();
}
