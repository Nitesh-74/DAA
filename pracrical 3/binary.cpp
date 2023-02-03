#include <iostream>
using namespace std;
int BinSearch(int A[],int n ,int key){
    int s=0;
    int e=n;
    while(s<n){
        int mid=s+e/2;
        if(A[mid]==key){
            return mid;
        }
        else if(A[mid<key]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
     cin>>n;
 
    int A[n];
    cout<<"Enter araay elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int key;
    cout<<"Enter key element you want to enter"<<endl;
    cin>>key;
   cout<<"Your key inder is"<<endl;
    cout<<BinSearch(A,n,key);
}