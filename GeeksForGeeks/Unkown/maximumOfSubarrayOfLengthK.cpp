/*
    Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray 
    of size K.
*/

#include<bits/stdc++.h>
using namespace std;
int MaxSubArray(int arr[], int n, int k) {
   
}
int main(){
    int k, n;
    cin>>k>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<getMinDiff(arr, n, k)<<endl;
    return 0;
}