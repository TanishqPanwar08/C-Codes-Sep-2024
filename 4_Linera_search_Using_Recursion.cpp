#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array is "<< n << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearsearch(int arr[], int n, int k){
    print(arr,n);
    if(n==0) return false;
    
    if(arr[1]==k){
        return true;
    }
    else{
        return linearsearch(arr+1, n-1, k);
    }
}

int main()
{
    int arr[6]={1, 2, 3, 4, 5, 6};
    int ans = linearsearch(arr, 6, 6);
    if(ans){
        cout<<"Present !! "<<endl;
    }
    else{
        cout<<"Absent  !! "<<endl;
    }
}