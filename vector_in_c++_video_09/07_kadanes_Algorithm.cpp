#include <iostream>
using namespace std;
#include <vector>
#include <climits>
int main(){
vector<int> vec={3,-4,5,4,-1,7,-8};
int n=vec.size();
int currsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    currsum+=vec[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
    }
}
cout<<"maxsum by kadane's algorithm is :"<<maxsum<<endl;
return 0;

}
