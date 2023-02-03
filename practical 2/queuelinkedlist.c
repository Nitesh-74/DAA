#include <stdlib.h>
struct Node{
    int data; 
    struct Node*next;
}*front=NULL,*rare=NULL;
void enqueue(int x){
    struct Node*t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    printf("queue is full");
    else{
        t->data=x;
        t->next=NULL;
if(front==NULL)
front=rare=t;
else{
    rare->next=t;
    rare=t;
}
    }
    
}
int dequeue(){
    struct Node*p;
    int x=-1;
    if(front==NULL)
    printf("queue is empty");
    else{
      //  p=front;
      //  front =front->next;
     //   x=p->data;
      //  free(p);
        x=front->data; 
               p=front;
               front=front->next;
               free(p);

    }
    return x;
}
void display(){
    struct Node*p;
    while(p){
printf("%d",p->data);
p=p->next;
    }
printf("\n");
}
int main(){
    struct Node* p=front;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
}
