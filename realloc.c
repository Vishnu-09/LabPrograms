#include<stdio.h>
#include<stdlib.h>
int main()
   {

       int i,n,s=0,*p;
       printf("enter the size");
       scanf("%d",&n);
       p=(int *)malloc(n*sizeof(int));
       p=(int *)realloc(p,n+1*sizeof(int));
     
