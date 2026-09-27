#include <iostream>
using namespace std;
#include <vector>
class Nani{
    public:
    int ME(vector<int> arr){
        int n=arr.size();
        int count=0;
        int element=-1;
        for(int val : arr){
            if(count==0){
                element=val;
            }
            if(element==val){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int val : arr){
            if(val==element){
                count++;
            }
        }
        if(count>n/2){
            return element;
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