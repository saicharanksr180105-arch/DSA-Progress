#include <iostream>
using namespace std;
#include <vector>
class Nani{
    public:
    int Me(vector<int> arr){
        int n =arr.size();
        int freq=1;
        int ans=arr[0];  
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                freq++;

            }
            else{
                freq=1;
                ans=arr[i];
            }
            if(freq>n/2){
                return arr[i];
            }        
        }
        return -1;
    }
};

int main(){
    Nani n1;
    cout<<n1.Me({2,2,1,1,1,1,2});
    return 0;
}