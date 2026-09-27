#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v2(4,7);
    for(int i : v2){
        cout<<i<<endl;
    }
    return 0;
}