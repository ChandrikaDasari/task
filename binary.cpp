#include<iostream>
#include<vector>
using namespace std;


// basic iterative approach where time complexity is O(log n)
int bs(vector<int>&arr,int target,int n){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) return low=mid+1;
        else return high=mid-1;
    }
    return -1;
}
int main(){
    vector<int>a ={1,2,3,4,5,6};
    int n=a.size();
    cin>>a[i]>>n;
    
    cout<<"element found at:"<<bs(a,n)<<endl;
    return 0;
}