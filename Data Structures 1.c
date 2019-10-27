#include<stdio.h>
#define size 5
int data[size];
int top=-1;

int main()
{
   int i,n,e,k;
   printf("how much push ?");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&e);
     push(e);
   }
     pop(e);
     peek(e);
     printf("\n pop1 :%d ", pop(e));
     printf("\n peek1 :%d ", peek(e));
     k=pop();
     printf("\npeek 1.2 k= %d",k);
     printf(" \ncheck peek 1.2 = %d",pop(e));
     display();
   return 0;
}

void push(int e)
{
    if(top<size-1)
    {
        top++;
        data[top] =e;
    }
    else {printf("\n over!! ");}

}

int pop()
{
    int temp;
    if(top > -1)
    {
        temp=data[top];
        top--;
    }
    return temp;
}
int peek()
{
    int temp;
        if (top> -1)
        {
            temp=data[top];
        }
        return temp;
}

void display()
{
    for(int i =0; i<size;i++)
    {
        printf(" \n%d",data[i]);
    }
}
