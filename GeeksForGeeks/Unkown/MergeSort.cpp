#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(const vector<int>& arr) {
    /// Tri fusion (Merge Sort)

    // Cas de base : retouner l'élément unique
    if (arr.size() <= 1) {
        return arr;
    }

    // Diviser le tableau jusqu'à obtenir des parties unitaires
    size_t mid = arr.size() / 2;
    auto left = mergeSort(vector<int>(arr.begin(), arr.begin() + mid));
    auto right = mergeSort(vector<int>(arr.begin() + mid, arr.end()));

    // Fusionner les parties déjà triées
    vector<int> result;
    for (auto itLeft = left.begin(), itRight = right.begin(); ; ) {
        if (*itLeft < *itRight || !(*itRight)) {
            result.push_back(*itLeft);
            ++itLeft;
        } else {
            result.push_back(*itRight);
            ++itRight;
        }
        if (!*itLeft && !*itRight) break;
    }

    return result;
}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    arr = mergeSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

