#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k){
    sort(arr, arr+r+1);
    return arr[k-1];
}


int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<kthSmallest(arr, 0, N-1, k);
    return 0;
}