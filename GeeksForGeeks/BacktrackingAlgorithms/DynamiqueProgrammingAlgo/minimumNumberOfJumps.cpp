#include<bits/stdc++.h>
using namespace std;
//Brute force approche
/*int minJumps(int arr[], int N){
    if(arr[0]==0){
        return -1;
    }
    int jumps[N];
    jumps[0] = 0;
    for(int i=1; i<N; i++){
        jumps[i] = INT_MAX;
        for(int j=0; j<i; j++){
            if(arr[j] + j>=i && arr[j]!=INT_MAX){
                jumps[i] = min(jumps[i], jumps[j]+1);
                break;
            }
        }
    }
    if(jumps[N-1]==INT_MAX){
        return -1;
    }
    else{
        return jumps[N-1];
    }
}*/
int minJumps(int arr[], int n){
    if(n==1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    int maxReach = arr[0];
    int step = arr[0];
    int jumps = 1;
    for(int i=1; i<n; i++){
        if(i==n-1){
            return jumps;
        }
        maxReach = max(maxReach, arr[i] + i);
        step--;
        if(step==0){
            jumps++;
            if(i>=maxReach){
                return -1;
            }
            step = maxReach -i;
        }
    }
    return -1;
}


int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    cout<<minJumps(arr, N);
    return 0;
}