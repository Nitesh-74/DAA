#include <stdlib.h>
struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
}*first=NULL;
void create(int A[],int n){
struct Node *t,*last;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=A[0];
first->prev=first->next=NULL;
last=first;

for(int i=1;i<n;i++){
t=(struct Node*)malloc(sizeof(struct Node));
t->data=A[i];
t->next=last->next;
t->prev=last;
last->next=t;
last=t;

}
}
void display(struct Node*p){
    while(p){
    printf("%d",p->data);
    p=p->next;
    }
    printf("\n");
}
int length(struct Node*p){
 int   len=0;
    while(p){
        len++;
        p=p->next;

    }
    return len;

}
int main(){
    
   int A[]={10,20,30,40};
   create(A,4);
   display(first);
   printf("%d",length(first));

}