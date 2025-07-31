#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int info;
    struct node *link;
};

int count=0;
struct node *head=NULL;
struct node *ptr=NULL;
struct node *temp=NULL;


void insertAtEnd()
{
    struct node *avail;

    avail=malloc(sizeof(struct node));
    if(avail==NULL)
    {
        printf("No Memory Available");
        exit(0);
    }
    if(head==NULL)
    {
        head=avail;
        printf("Enter Value: ");
        scanf("%d",&head->info);
        head->link=NULL;
    }
    else
    {
        ptr=head;
        while((ptr->link)!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=avail;
        ptr=ptr->link;
        printf("Enter Value: ");
        scanf("%d",&ptr->info);
        ptr->link=NULL;
    }
    printf("Inserted\n");
}

void insertAtBegin()
{
     struct node *avail;
    avail=malloc(sizeof(struct node));
    if(avail==NULL)
    {
         printf("No Memory Available");
        exit(0);
    }
    if(head==NULL)
    {
        head=avail;
        printf("Enter Value: ");
        scanf("%d",&head->info);
        head->link=NULL;
    }
    else
    {
        ptr=avail;
        printf("Enter Value: ");
        scanf("%d",&ptr->info);
        ptr->link=head;
        head=ptr;
    }
    printf("Inserted\n");
}

void deleteAtBegin()
{
    if(head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else if((head->link)==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        ptr=head;
        head=head->link;
        ptr->link=NULL;
        free(ptr);
    }
    printf("Deleted\n");
}

void deleteAtEnd()
{
    if(head==NULL)
    {
         printf("Linked List is Empty\n");
    }
    else if((head->link)==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        ptr=head;

        while((ptr->link)!=NULL)
        {
            temp=ptr;
            ptr=ptr->link;
        }

        temp->link=NULL;
        free(ptr);
    }
    printf("Deleted\n");
}

void view()
{
    if(head==NULL)
    {
        printf("Linked List Is Empty\n");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->info);
            ptr=ptr->link;
        }
    }
    printf("Viewed\n");
}

void countNode()
{
    count=0;

     if(head==NULL)
    {
        printf("%d Node in Linked List\n",count);
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->link;
        }
    }
    printf("%d Node in Linked List\n",count);
}

int main()
{
    int choice;
    while(1)
    {
        printf("1. Insert Node At Begin\n");
        printf("2. Insert Node At End\n");
        printf("3. Delete Node At Begin\n");
        printf("4. Delete Node At End\n");
        printf("5. View/Traverse A List\n");
        printf("6. Count Node\n");
        printf("7. Exit\n");
        printf("Enter Ur Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:insertAtBegin();break;
        case 2:insertAtEnd();break;
         case 3:deleteAtBegin();break;
        case 4:deleteAtEnd();break;
         case 5:view();break;
        case 6:countNode();break;
         case 7:exit(0);break;
        default:printf("Enter Proper Choice Between 1 to 7");break;
        }

        getch();
    }


    return 0;
}
