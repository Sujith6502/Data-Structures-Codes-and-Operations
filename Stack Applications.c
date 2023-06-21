#include<stdio.h>
int main (){
    int i,n,value,top=-1,flag=0,target;
    scanf("%d",&n);
    int stk[100];
    //Pushing a value in a stack
    for(i=0;i<n;i++){
        scanf("%d",&value);
        top++;
        stk[top]=value;
    }
    for(i=0;i<n;i++){
        printf("\n%d\n",stk[i]);
    }
    //Printing the top element of the stack
    printf("Printing the Top Elements\n");
    printf("%d",stk[top]);
    //Searching an element in a stack
    printf("Enter the Target Element\n");
    scanf("\n%d",&target);
    for(i=top;i>=0;i--){
        if(stk[i]==target){
            printf("Element is found at %d\n",i);
            flag=1;
        }
    }
    //Checking if the stack is empty
    if(top==-1){
        printf("Stack is Empty\n");
    }
    //Checking if the stack is full
    if(top==n-1){
        printf("Stack is Full");
    }
    //Traversing the data in a Stack
    for(i=top;i>=0;i--){
        printf("\n%d",stk[i]);
    }
}
