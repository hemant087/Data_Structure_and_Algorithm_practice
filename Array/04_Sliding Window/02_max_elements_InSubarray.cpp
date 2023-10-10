#include<iostream>
#include<vector>
using namespace std;


int MaxElm(int arr[],int n, int k){
    int mx = 0;
    vector<int> temp;
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
        cout<<temp[i];
    }
}

int main(){
    int arr[] = {1, 2, 7, 8, 3, 9, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]),k = 3;
    MaxElm(arr, n, k);
    // MaxSum1(arr, n, k);
}