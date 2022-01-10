#include<stdio.h>
#include<conio.h>
void main()
{
int flag=0,i=0,n,s,a[20];
clrscr();
printf("enter the count");
scanf("%d",&n);
printf("enter the  array element");
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
  printf("enter the search element");
  scanf("%d",&s);
  for(i=0;i<n;i++);
  {
   if(s==a[i])
    {
      flag=1;
    }
  }
     if(flag==1)
   {
    printf("element not found");
   }
    else
     {
       printf("element found at%d position",i);
     }
      getch();
}