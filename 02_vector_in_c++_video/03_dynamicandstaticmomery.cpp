// mainly theory part is there in note book 
#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;  // you get clear about this , i wrote about it in note book 
    return 0 ;
}