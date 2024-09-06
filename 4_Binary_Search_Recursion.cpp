#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int k){
    if(s>e)
        return false;
    int mid = s+(e-s)/2;
    if(k == arr[mid])
        return true;
    if(k<arr[mid]){
        BinarySearch(arr, s, mid-1, k);
    }
    else{
        BinarySearch(arr, mid+1, e, k);
    }  
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int *arr = new int[n];
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        cout<<"Enter the Element to Found : ";
        int k;
        cin>>k;

        if(BinarySearch(arr, 0, n-1, k)){
        cout<<"Element is Present !!"<<endl;
        }
        else{
            cout<<"Element is absent";
        }
        
    }
}
