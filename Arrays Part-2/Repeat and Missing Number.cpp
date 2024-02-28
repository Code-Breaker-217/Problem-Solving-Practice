#include <bits/stdc++.h>
using namespace std;

void RepeatAndMissing(vector<int> &nums){
    int n=nums.size();
    int i;
    cout << "The repeating element is ";
 
    for (i = 0; i < n; i++){
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }
 
    cout << "and the missing element is ";
    for (i = 0; i < n; i++){
        if (arr[i] > 0)
            cout << (i + 1);
    }
}
 
int main(){
    vector<int> nums = { 7, 3, 4, 5, 5, 6, 2 };
    RepeatAndMissing(nums);
}