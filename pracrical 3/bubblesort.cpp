#include <iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int A[n];
     cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int count=1;
    while(count <n){
        for(int i=0;i<n-count;i++){
            if(A[i]>A[i+1]){
                int temp=A[i+1];
                A[i+1]=A[i];
                A[i]=temp;
            }
        }
    }
    count++;
     cout<<"sorted array : "<<endl;
    for(int i =0;i<n;i++){
        cout<<A[i]<<" ";
    }
}