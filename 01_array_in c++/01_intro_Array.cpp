#include <iostream>
#include <array>
using namespace std;

int main() {
    int marks[5]={20,4,5,34,25};   //array with memory declared 5 , so in memory 5 variable place was created and this 5 elements was stored
    int nani[]={4,5,7,6,8,0};  
    //array with out memory , in this array you not declared memory but assigned values , so values will store in memory 
    int n;
    cout <<"enter number of elements in array : ";
    cin >> n;
    int pandu[n];
    //taking inputs for array by loop 
    for(int i=0; i<n; i++){
        cout<<"enter elements :";
        cin>>pandu[i];
    }

    //for printing array elements by loop 
     for(int i=0; i<n; i++){
        cout<<"printing elements :";
        cout<<pandu[i]<<endl;
    }
    // we can print element by elemnt like single print and we can take single input's 
    cout<<"taking input without loop:";
    cin>>pandu[0];
    cout <<"printing elemnt without loop :";
    cout<<pandu[0]<<endl;
        return 0;
}