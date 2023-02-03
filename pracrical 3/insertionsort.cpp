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
    for(int i=1;i<n;i++){
        int curr=A[i];
        int j=i-1;
        while(A[j]>curr && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=curr;
    }
     cout<<"sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}