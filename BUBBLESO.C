#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp,x;
clrscr();
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
x=0;
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j++])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
x++;
}
}
if(x==0)
break;
}
printf("The sorted array is \n");
for(i=0;i<n;i++);
printf(" %d",a[i]);
printf("\n");
getch();
}