#include <iostream>
#include <vector>
using namespace std;
#include <climits>

// Brut force approch complexity o(n^2)

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    int maxsum= INT_MIN;
    for(int i=0;i<n;i++){
        int currentsum=0;
        for(int j=i;j<n;j++){
            currentsum+=arr[j];
            maxsum=max(currentsum,maxsum);
        }
    }

    cout<<"max sub array is :" <<maxsum<<endl;
    return 0;

}