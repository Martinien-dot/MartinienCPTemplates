#include<bits/stdc++.h>

using namespace std;

void generateSubsetSums(const vector<int>& arr, int index, int sum, multiset<int>& subsetSums) {
    int n = arr.size();
    if (index == n) {
        subsetSums.insert(sum);
        return;
    }
    generateSubsetSums(arr, index + 1, sum + arr[index], subsetSums);
    generateSubsetSums(arr, index + 1, sum, subsetSums);
}

multiset<int> getAllSubsetSums(const vector<int>& arr) {
    multiset<int> subsetSums;
    generateSubsetSums(arr, 0, 0, subsetSums);
    return subsetSums;
}

int main() {
    vector<int> arr = {-1, 2, 3};
    multiset<int> subsetSums = getAllSubsetSums(arr);

    cout << "Ensemble de toutes les sommes possibles du tableau : ";
    for (int sum : subsetSums) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
