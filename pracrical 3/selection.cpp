#include <iostream>
using namespace std;

// ================SELECTION SORT================
int main(){

    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int A[n];
     cout<<"Enter the array  elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
if(A[j]<A[i]){
int temp=A[j];
A[j]=A[i];
A[i]=temp;
}
        }
    }
    cout<<"sorted array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

