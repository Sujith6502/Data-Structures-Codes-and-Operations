#include<stdio.h>
#include<stdlib.h>
int q[10];
int rear=-1;
int front=-1;
int n=5;
void enqueue(){
    int i,value;
    if(rear==n-1){
        printf("Queue is full\n");
    }
    else{
        printf("Enter the Elements in the Queue\n");
        for(i=0;i<n;i++){
            scanf("%d",&value);
            if(front==-1){
                front=0;
            }
            rear=rear+1;
            q[rear]=value;
        }
        
        
    }
}
void pop(){
    if(front==-1 || front>rear){
        printf("The queue is empty");
        
    }
    front=front+1;
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d",q[i]);
    }
}
int main(){
    enqueue();
    display();
    pop();
    display();
    return 0;
}

