/*
    Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray 
    of size K.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>max_of_subarrays(int arr[], int N, int K)
{
    vector<int>res;
    deque<int> Qi(K);
    int i;
    for (i = 0; i < K; ++i) {
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    for (; i < N; ++i) {
        res.push_back(arr[Qi.front()]);
        while ((!Qi.empty()) && Qi.front() <= i - K)
            Qi.pop_front();

        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    res.push_back(arr[Qi.front()]);
    return res;
}
int main(){
    int k, n;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>aide = max_of_subarrays(arr, n, k);
    for(int c:max_of_subarrays(arr, n, k)){
        cout<<c<<" ";
    }
    return 0;
}