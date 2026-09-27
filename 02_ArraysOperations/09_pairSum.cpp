// pair means , suppose an array arr[4]={2,7,11,15}; , (2,7),(2,11),(2,15),(7,11),(7,15),(11,15) are the pairs of the array.
// we have to find the pairs whose sum is equal to the given target value.
// in this code we will use the brute force approach to find the pairs whose sum is equal to the given target value.
// we can also use the two pointer approach to find the pairs whose sum is equal to the given target value.
// now lets do it with brute force approach.

#include <iostream>
using namespace std;
#include <vector>

vector<int> pairsum(vector<int>nums,int target){
    vector<int>nani;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+ nums[j]==target){
                nani.push_back(nums[i]);
                nani.push_back(nums[j]);
            }
        }
    }
    return nani;
}

int main(){

    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=pairsum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
