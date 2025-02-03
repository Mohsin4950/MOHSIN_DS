#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top= -1;
void push(int);
void pop();
void display();
void main()
{

    int choice, value;
    while(1){
        printf("\n \t ***menu***\n");
        printf("\n 1.push\n 2.pop\n 3.display \n 4 exit\n");
        printf("\n enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter the element to be inserted:");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\n sorry! invalid option!");


        }

    }
}
void push(int value)
{
    if(top==size-1)
    printf("stack is full");
    else{

    top++;
    stack[top]=value;
    }
}
void pop()
{
    if(top==-1)
printf("\n the stack is empty");
else{
   printf("\n deleted: %d",stack[top]);
   top--;
}
}
void display()
{
    int i;
    if(top== -1)
        printf("\n the stack is empty");
    else{
        printf("\n array elements");
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
}

