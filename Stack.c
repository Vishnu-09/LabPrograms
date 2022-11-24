#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_size 5

      int stack[max_size],top=-1;
      void push();
      void pop();
      void display();


      int main()
      {

          int choice;
          while(choice)
          {

              printf("-----STACK OPERATIONS-----");
              printf("1.push \n");
              printf("2.pop \n");
              printf("3.display \n");
              printf("4.exit \n");
              printf("---------------------------");
              printf("enter your choice");
              scanf("%d",&choice);
       switch(choice)
    {

    case 1:
          push();
          break;
    case 2:
          pop();
          break;
    case 3:
          display();
          break;
    case 4:
        exit(0);
        break;
    default :
        printf("\n invalid choice");
        break;

    }
          }
    return 0;

      }


void push()
{

    int item,n;
    if (top==(max_size))
    {

        printf("\n stack overflow");
    }
    else
    {

        printf("enter the element  to be inserted");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }

    }
void pop()
{

    int item;
    if(top==-1)
{

    printf("stack underflow");
}
else
{
        item=stack[top];
    top=top-1;
printf("\n the poped element:%d \t",item);
}
}
void display()
{

    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
else
{

    printf("stack elements are \n");
    for(i=top;i>=0;i--)

{
    printf("%d \n",stack[i]);
    }
}
    }


  
