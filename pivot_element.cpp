#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>&arr  ){
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        int mid= s+(e-s)/2;
        // first line
        if(arr[mid]>arr[mid+1]){
            s= mid+1;
        }
        // second line 
        else{
            e = mid;
        }
         mid= s+(e-s)/2;
    }
return s;
};
int main(){
    vector<int>arr = {  7 ,1 , 4 , 6 ,8};
    cout<<"pivot is at index"<<" "<<pivot(arr);
}