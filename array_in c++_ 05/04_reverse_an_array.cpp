#include <iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}  

// // to solve this we can use 2 pointer approach
// this approach also uses in many problem , for these problem we can use this approach to reverse a array 
// in string we use 2 pointer approach more 