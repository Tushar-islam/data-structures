
#include<stdio.h>
#define n 5
void main()
{
    int queue[n];
   int  ch=1;
   int  front =0;
    int rear =0;
    int i,j =1;
    int x = n;

    printf("\n1.Insertion \n2.Deletion \n3.Display\n");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf(" Queue is Full\n");
            else
            {
                printf(" Enter no %d:\n",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf(" Queue is empty\n");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf(" Queue Elements are:\n ");
            if(front==rear)
                printf(" Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;

            }
        }
    }

}
