#include<stdio.h>
void input();
void Display();
void Union();
void intersection();
void Difference();
int a[]={0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0};
void main()
{
   int ch;
   clrscr();
   printf("*** SET OPERATIONS **\n");
   do
   {
   printf("\n\n1.Input\n2.Union\n3.Intersection\n4.Difference\n5.Exit\n");
   printf("\n Enter choice:");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1: input();
	      break;
     case 2: Union();
	     break;
     case 3: intersection();
	     break;
     case 4: Difference();
	     break;
     case 5: exit(0);
     default: printf("\n*** Invalid choice **\n");
     }
    }while(ch!=5);
    }
    void input()
    {
    int n1,n2,x,i;
    printf("\n Enter sizeof SET 1:");
    scanf("%d",&n1);
    printf("\n Enter elements of SET 1:");
    for(i=1;i<=n1;i++)
    {
      scanf("%d",&x);
      a[x]=1;
    }
    printf("\n Enter sizeof SET 2:");
    scanf("%d",&n2);
    printf("\n Enter elements of SET 2:");
    for(i=1;i<=n2;i++)
    {
      scanf("%d",&x);
      b[x]=1;
    }
    printf("\nSET 1:{");
    for(i=1;i<=9;i++)
    {
    printf("%d",a[i]);
    }
    printf("}");
    printf("\n SET 2:{");
    for(i=1;i<=9;i++)
    {
      printf("%d",b[i]);
    }
    printf("}");
   }
   void Display(int c[])
   {
     int i;
     printf("\n\t\t{");
     for(i=1;i<=9;i++)
     {
       if (c[i]!=0)
       printf("%d",i);
       ;
     }
     printf("}");
     }
     void Union()
     {
     int c[10],i;
     for(i=1;i<=9;i++)
     {
       if(a[i]!=b[i])
       c[i]=1;
       else
       c[i]=a[i];
    }
    printf("|nSET is :{");
    for(i=1;i<=9;i++)
    {
    printf("%d",c[i]);
    }
    printf("}");
    Display(c);
    }
    void intersection()
    {
     int c[10],i;
     for(i=1;i<=9;i++)
     {
     if (a[i]==b[i])
     c[i]=a[i];
     else
	c[i]=0;
     }
     printf("\nSET is :{");
     for(i=1;i<=9;i++)
     {
     printf("%d",c[i]);
     }
     printf("}");
       Display(c);
     }
     void Difference()
     {
     int c[10],i;
     for(i=1;i<=9;i++)
     {
     if(a[i]==1&&b[i]==0)
     c[i]=1;
     else
	 c[i]=0;
     }
     printf("\nSET is :{");
     for(i=1;i<=9;i++)
     {
     printf("%d",c[i]);
     }
     printf("}");
     Display(c);

     }