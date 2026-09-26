
#include <iostream>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){

 int arr[]={4,3,6,5,7,9,5,8};
 int sz=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int a=linearSearch(arr,sz,target);
    if(a==-1){
        cout<<"element not found in array : "<<a<<endl;
    }
    else{
        cout<<"element found at index : "<<a<<endl;
    }
    return 0;
}