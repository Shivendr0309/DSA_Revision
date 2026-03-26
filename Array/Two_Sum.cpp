//this approach only works on sorted array

#include<iostream>
#include<vector>
using namespace std;
pair<int, int> twoSum(vector<int>& arr, int target) {
    int first=0;
    int last=arr.size()-1;
    while(first<last){
    int sum=arr[first]+arr[last];
     if(sum==target){
        return {first,last};
     }
     else if(sum<target){
        first++;
     }
     else{
        last--;
     }
    }
    return{-1,-1};
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int target = 6;

    pair<int, int> result = twoSum(arr, target);

    cout << result.first << " " << result.second;
}