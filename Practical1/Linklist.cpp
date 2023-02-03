#include <iostream>
using namespace std;
class Node{
    public:
     int data;
     Node*next;

     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};
void insertatfirst(Node* &Head,int d){
    Node*temp=new Node(d);
    temp->next=Head;
    Head=temp;
}
void insertatlast(Node * &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatpos(Node*&Head,Node* &tail,int pos,int d){
 Node *temp=Head;
 int c=1;
 if(pos==1){
 insertatfirst(Head,d);
return;
 }
 while(c<pos-1){
    temp=temp->next;
    c++;
 }
 Node* nodetoinsert=new Node(d);
 nodetoinsert->next=temp->next;
 temp->next=nodetoinsert;
  if(temp->next==NULL){
   insertatlast(tail,d);
   return;
  }

}


void print(Node * &Head){
    Node*temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
Node* node1=new Node(1);
Node*Head=node1;
Node*tail=node1;
insertatfirst(Head,2);
// print(Head);
insertatlast(tail,0);
print(Head);
cout<<endl;
insertatpos(Head,tail,2,5);
print(Head);
}