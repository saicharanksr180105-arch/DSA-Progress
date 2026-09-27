// pair sum by two pointer approach
#include <iostream>
using namespace std;
#include <vector>
vector<int> pairSum(vector<int>nums , int target){
    vector <int> ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
       int sum = nums[i]+nums[j];
       if(sum>target){
            j--;
       }
       else if(sum<target){
        i++;
       }
       else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
       }

    }
    return ans;
}

int main(){

    vector<int>nums={2,7,11,15};
    int target=9;
    vector <int> nani=pairSum(nums,target);
     for(int i=0;i<nani.size();i++){
        cout<<nani[i]<<" ";

     }
     return 0;

}