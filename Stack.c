// Stack Implementation in C using Array.

#include<stdio.h>
#include<stdlib.h>  // header file for exit and return function
#define max 5

int stack[max],top=-1;          // global variable

void push();
int pop();
void disp();

main()
{
    int w,r;        // w stand for your want and r for catch return value
    for(;;)         // for infinite loop
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display the Stack ");
        printf("\n4. EXIT");
        printf("\n\nEnter what you want:");
        scanf("%d",&w);
        switch(w)
        {
        case 1:
            push();
            break;
        case 2:
            r=pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(1);
        default:
            printf("\nInvalid Choice !!\n");
        }
    }
}

void push()
{
    int num;
    if(top==max-1)
    {
        printf("\nStack is Full !\n");
        return;
    }
    else {
        printf("\nEnter a number for Insert:");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}

int pop()
{
    int e;
    if(top==-1)
    {
        printf("\nStack is Empty !!\n");
        return;
    }
    else {
        e=stack[top];
        printf("\n%d was Deleted !\n",e);
        top--;
        return e;
    }

}

void disp()
{
    int i;
    if(top==-1){
        printf("\nNothing to Display !!\n");
        return;
    }
    else {
        printf("\n");
        for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);
        printf("\n");
    }
}
