#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(){

    int nums[5];
    cout<<"enter num:";
    for(int i=0; i<5; i++){
        cin>>nums[i];
    }
    cout<<"the total elements in array : \n";
    for(int i=0; i<5; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\nfor min or max value , we have two methods to solve :"<<endl;
    cout<<"using INT_MAX and INT_MIN : method by loop"<<endl;
    cout<<"for min value of a array is :"<<endl;
    int min_val=INT_MAX;
    for(int i=0; i<5; i++){
        if(nums[i] < min_val){
            min_val = nums[i];
        }
    }
    cout<<"minimum value of array is :"<<min_val<<endl;
    cout<<"for max value of a array is :" <<endl;
    int max_val=INT_MIN;
    for(int i=0; i<5; i++){
        if(nums[i]> max_val){
            max_val = nums[i];
        }
    }
    cout<<"maximum value of array is :"<<max_val<<endl;

    cout<<"using inbuild function :"<<endl;
    cout<<"for min value of a array is :"<<endl;

    int min_val2=INT_MAX;
    for(int i=0; i<5; i++){
       min_val2 = min(min_val2, nums[i]);
    }
    cout<<"minimum value of array is :"<< min_val2<<endl;
    cout<<"for max value of a array is :"<<endl;
    int max_val2=INT_MIN;    
    for(int i=0; i<5; i++){
        max_val2 = max(max_val2, nums[i]);
    }
    cout<<"maximum value of array is :"<< max_val2 <<endl;

    return 0;
}