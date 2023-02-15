#include <iostream>
using namespace std;
int exhSearch(int A[],int n,int key){
for(int i=0;i<n;i++){
    if(A[i]==key){
        return i;
    }
    
}
 return -1;
}

int main (){
    
    int n;
    cout<<"Enter number of elements"<<endl;
     cin>>n;
 
    int A[n];
    cout<<"Enter araay elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int key;
    cout<<"Enter the key element you want to search"<<endl;
    cin>>key;
    cout<<"your key index is : "<<endl;
    cout<<exhSearch(A,n,key)<<endl;
   
}