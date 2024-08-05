#include<iostream>
#include<vector>
using namespace std;


// basic iterative approach where time complexity is O(log n)
class solution{
public:
void bs(vector<int>&arr,int target,int n){
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid[arr]==target) return mid;
        else if(target>mid[arr]) return low=mid+1;
        else return high=mid-1;
    }
    return -1;
}
};
int main(){
    vector<int>a ={1,2,3,4,5,6};
    int n=a.size();
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    cout<<"element found at:";
    bs(a,n)<<endl;
    return 0;
}