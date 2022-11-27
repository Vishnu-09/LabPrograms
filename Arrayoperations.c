#include<stdio.h>
#include<stdlib.h>

int a[20];
int i,n,val,pos;


 void create();

 void display();
 void insert();
 void delete();

int main()
{
    int choice=1;
    while(choice)
    {

        printf("menu");
        printf("\n 1.CREATE \n" );
        printf("\n 2.Display \n" );
        printf("\n 3.insert \n" );
        printf("\n 4.delete \n" );
        printf("\n 5.exit \n" );
        printf("------------------");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete();
            break;
        case 5:
            exit(0);
        default :
            printf("invalid choice");
            break;
        }
        }
        return 0;
}
    


        scanf("%d",&a[i]);
    }
    }
    void display()
    {
    int i;
    printf("elements are");
    for(i=0;i<n;i++)
    {

        printf("%d",a[i]);

    }

    }
      void insert()
      {

          printf("enter the position for new element");
          scanf("%d",&pos);
          printf("\n enter the eleement to be inserted:\t");
          scanf("%d",&val);
          for(i=n-1;i>=pos;i--)
          {

              a[i+1]=a[i];
          }
          a[pos]=val;
          n=n+1;

          }
      void delete()
      {

          printf("\n enter the positionof element to be deleted:\t");
          scanf("%d",&pos);
          val=a[pos];
          for(i=pos;i<n-1;i++)
          {

              a[i]=a[i+1];
          }
          n=n-1;
          printf("the deleted element is = %d",val);

          }

