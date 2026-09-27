#include<iostream>
using namespace std;
#include <vector>



class Nani{

    public:
    int ME(vector<int> arr){
        int n=arr.size();
        for(int val : arr){
            
            int freq=0;
            for(int nan : arr){
                if(nan==val){
                    freq++;
                }
            }
            if(freq>n/2){
                return val;
            }
        }
        return -1;
    }
};

int main(){
    Nani n1;
    vector<int> pandu={2,2,1,1,1,2,2};
    int a=n1.ME(pandu);
    cout<<a;
    return 0;
}