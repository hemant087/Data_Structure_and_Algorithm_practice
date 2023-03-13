#include <iostream>
using namespace std;

// Newbie/Brut Force approach by using nested loop 
int MaxSum(int arr[], int n, int k){
    int max_sum = 0;
    for (int i = 0; i < n - k + 1; i++){
        int sum = 0;
        for (int j = i; j < i + k; j++){
            sum = sum + arr[j];
        }
        cout << sum << " ";
        max_sum = max(max_sum, sum);
    }
    cout << "\nMax Sum of Sub array : " << max_sum<<endl;
}
// By using Sliding Window Approach
int MaxSum1(int arr[], int n, int k){
    int sum =0;
    for (int x=0;x<k;x++){
        sum += arr[x];
    }
    int max_sum = sum;
    for (int i =k; i < n ; i++){
        sum += arr[i]-arr[i-k];
        cout<< sum <<" ";
        max_sum = max(max_sum,sum);
    }
    cout << "\nMax Sum of Sub array : " << max_sum;
}

int main(){
    int arr[] = {1, 2, 7, 8, 3, 9, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]),k = 3;
    MaxSum(arr, n, k);
    MaxSum1(arr, n, k);
}
