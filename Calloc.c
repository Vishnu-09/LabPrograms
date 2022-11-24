
#include<stdio.h>
#include<stdlib.h>
int main()
   {

       int i,n,s=0,*p;
       printf("enter the size");
       scanf("%d",&n);
       p=(int *)calloc(n,sizeof(int));
       printf("enter elements");
       for(i=0;i<n;i++)
       {

           scanf("%d",p+i);
           s = s+ *(p+i);
        }
       printf("sum=%d",s);
       free(p);
       return 0;
       }

