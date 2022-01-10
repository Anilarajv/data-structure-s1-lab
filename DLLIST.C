#include<stdio.h>
#include<conio.h>
struct DNode
{
   struct DNode *left;
   int data;
   struct DNode *right;
};
typedef struct DNode dnode;
dnode *getnode();
void main()
{
   dnode *first, *temp, *current;
   int i,n,pos,item,ch;
   first= NULL;
   printf(" Enter the size of doubly linked list");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf(" Enter the data of node %d",i);
      scanf("%d",&item);
      temp=getnode();
      temp->data=item;
      temp->right=NULL;
      if(first==NULL)
      {
	first=temp;
	temp->left=NULL;
      }
      else
      {
	current->right=temp;
	temp->left=current;
      }
      current=temp;
     }
     do
     {
     printf("\Enter your choice\n\n");
     printf("\n\t1.Inserting first node \n\t2.Inserting last node \n\t3.Inserting at any position \n\t4.Deleting first \n\t5.Deleting last \n\t6.Deleting any node \n\t7.Display \n\t8.exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
	  printf(" Enter the item to insert");
	  scanf("%d",&ch);
	  InsertDlistfirst(&first,item);
	  break;
   case 2:
	 printf(" Enter the item to be insert");
	 scanf("%d",&item);
	 InsertDlistlast(&first,item);
	 break;
   case 3:
	 printf("Enter the item to be insert");
	 scanf("%d",&item);
	 printf(" Enter the position");
	 scanf("%d",&pos);
	 InsertDlistAtAny(first,pos,item);
	 break;
   case 4:
	 DeleteDlistfirst(&first);
	 break;
   case 5:
	  DeleteDlistlast(&first);
	  break;
   case 6:
	 printf("\n Enter the position of node to delete");
	 scanf("%d",&pos);
	 DeleteDlistAtAny(&first,pos);
	 break;
   case 7:
	  displayDList(first);
	  break;
   case 8:
	  printf("Enter the item to search");
	  scanf("%d",&item);
	  searchDlist();
	  break;
   case 9:
	  exit(0);
    default:printf("\n Invalid input");
    }
  }while(ch!=15);
  getch();
  }
  dnode *getnode()
  {
      dnode *p;
    p=(dnode*)malloc(sizeof(dnode));
    return(p);
    }
    freenode(dnode *p)
    {
    free(p);
    }
    InsertDlistfirst(dnode **first,int item)
    {
       dnode *temp;
       temp=getnode();
       temp->data=item;
       temp->left=NULL;
       if( *first==NULL)
	  temp->right=NULL;
	  else
	  {
	    temp->right=*first;
	    (*first)->left=temp;
	  }
	  *first=temp;
	  }
	  InsertDlistlast(dnode **first,int item)
	  {
	     dnode *current, *temp;
	     temp=getnode();
	     temp->data=item;
	     temp->right=NULL;
	     if(*first==NULL)
	     {
	       temp->left=NULL;
	       *first=temp;
	     }
	     else
	     {
		current=*first;
		while(current->right!=NULL)
		current=current->right;
		temp->left=current;
		current->right=temp;
		}
	      }
	      InsertDlistAtAny(dnode **first,int pos,int item)
	      {
	      dnode *temp, *current;
	      int i;
	      temp=getnode();
	      temp->data=item;
	      if(pos==1)
	      {
	      if(*first=NULL)
		 (*first)->left=temp;
		 temp->right=(*first);
		 temp->left=NULL;
		 *first=temp;
	      }
	      else
		 i=2;
		 current=*first;
		 while((i<pos)&&(current->right!=NULL))
		 {
		   i++;
		   current=current->right;
		   }
		   temp->left=current;
		   temp->right=current->right;
		   if (current->right!=NULL)
		   {
		   temp->right->left=temp;
		   current->right=temp;
		   }
		 }
		 DeleteDlistfirst(dnode **first)
		 {
		   dnode *current;
		   int item;
		   if(*first==NULL)
		   {
		     printf("  list is empty");
		   }
		   else
		     {
		       current=(*first);
		       (*first)=(*first)->right;
		       if(* first!=NULL)
		       (*first)->left=NULL;
		       item=current->data;
		       freenode(current);
		       printf("Deleted item is %d",item);
		       }
		     }
		     DeleteDlistlast(dnode **first)
		     {
		      dnode *current;
		      int item;
		      if(*first==NULL)
			 printf(" list is empty");
			 else
			 {
			   current==first;
			   while(current->right!=NULL)
			   current=current->right;
			   if(current->left!=NULL)
			   current->left->right=current->right;
			   else
			     *first=NULL;
			     item=current->data;
			     freenode(current);
			     printf("deleted item is %d",item);
			     }
			   }
			   DeleteDlistAtAny(dnode **first,int pos)
			   {
			     dnode *current,*prev;
			     int i=1,item;
			     if(*first==NULL)
			     printf("list is empty");
			     else
			     {
			      current=*first;
			      while(current!=NULL)
			      {
				if(i=pos)
			     {
			      item=current->data;
			      if (current->left==NULL)
			      {
			      current->right->left=NULL;
			      *first=current->right;
			      freenode(current);
			    }
			    else if (current->right==NULL)
			    {
			      current->left->right=current->right;
			      freenode(current);
			   }
			   else
			   {
			     current->left->right=current->right;
			     current->right->left=current->left;
			     freenode(current);
			   }
			   printf("\n Deleted item is %d",item);
			   }
			   i++;
			   current=current->right;
			   }
			  }
			}
			displayDList(dnode *first)
			{
			  if(first==NULL)
			     printf("\n list is empty");
			  else
			  {
			    printf("The list is \n\n");
			    while(first!=NULL)
			    {
			    printf("%dlt",first->data);
			    first=first->right;
			    }
			   }
			 }
			 searchDlist(dnode *first,int item)
			 {
			   int flag;
			   if(first==NULL)
			   printf("\n list is empty");
			   else
			   {
			      while(first!=NULL)
			      {
			      if(first->data==item)
			      {
			      flag=0;
			      break;
			      }
			      else
			      {
			      flag=1;
			      first=first->right;
			      }
			    }
			 }
			 if(flag==0)
			 printf("Item is found");
			 else
			  printf("Item is not found");
			  }

