#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[], int size, int start = 1){
    for(int i=start; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={0, 1, 2, 3, 4, 5};

    printarr(arr, 6, 3);
    cout<<endl;
    printarr(arr, 6); // Deafault value 1 lelegA


}