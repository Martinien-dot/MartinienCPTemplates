/*Given an array arr[] of N non-negative 
    integers representing the height of 
    blocks. If width of each block is 1, compute how much water can be 
    trapped between the blocks during the rainy season. 
 */

#include<bits/stdc++.h>
using namespace std;
long long trappingWater(int arr[], int n){
    // code here
    // Indices to traverse the array
    int left = 0;
    int right = n-1;
 
    // To store Left max and right max 
    // for two pointers left and right
    int l_max = 0;
    int r_max = 0;
 
    // To store the total amount 
    // of rain water trapped
    long long result = 0;
    while (left <= right)
    {
 
      // We need check for minimum of left 
      // and right max for each element
      if(r_max <= l_max)
      {
 
        // Add the difference between 
        // current value and right max at index r
        result += max(0, r_max-arr[right]);
 
        // Update right max
        r_max = max(r_max, arr[right]);
 
        // Update right pointer
        right -= 1;
      }
      else
      { 
 
        // Add the difference between 
        // current value and left max at index l
        result += max(0, l_max-arr[left]);
 
        // Update left max
        l_max = max(l_max, arr[left]);
 
        // Update left pointer
        left += 1;
      }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<trappingWater(arr, n)<<endl;
    return 0;
}