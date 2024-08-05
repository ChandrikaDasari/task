#include<iostream>
#include<vector>
using namespace std;
//quicksort where the pivot element is the first element of the array
void quicksort(vector<int>&arr,int low,int high){
    int n=arr.size();
    int low=0,high=n-1
    int pivot=arr[low];
    while(low<high){
        int partitionindex=quicksort(arr,low,high);
        quicksort(arr,low-1,high);
        quicksort(arr,low,high+1);
    }
}

int partttion(){
    while(i<j){
        while(arr[i]<=pivot && i<high+1){
            i++;
        }
        while(arr[j]>pivot && i>low-1){
            j--;
        }
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[high]);
}
int qs(vector<int>arr,int low,int high){
    quicksort(arr,0,arr.size()-1)
}
int main(){
    vector<int>a ={1,2,5,7,9};
    int n=a.size();
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    cout<<"the sorted elements:";
    qs(a,n)<<endl;
    return 0;

}