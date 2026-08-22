// subarray for continuous elements
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int s=i;s<=j;s++){
                cout<<arr[s];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
