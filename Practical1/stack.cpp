#include <iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
     int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
        top++;
        arr[top]=element;
    }
        else
        cout<<"stack overflow"<<endl;
    }
    void pop(){
        if(top>=0)
        top--;  
        else
        cout<<"Stack Underflow"<<endl;
    }
    int peek(){
        if(top>=0)
        return arr[top];
    }
    
};
int main(){
   Stack st(4);
   st.push(22);
   st.push(23);
   st.push(24);
   st.push(25);
   cout<<st.peek()<<endl;
}