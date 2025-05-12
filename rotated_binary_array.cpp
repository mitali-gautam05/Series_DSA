#include<iostream>
#include<vector>
using namespace std;
int Getpivot(vector<int>&arr , int n   ){
    int s = 0;
    int e = n-1;
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

int binarySearch(vector<int>&arr , int size, int target){
    int st = 0 ,  end = size-1 ; 

    while(st<=end){
        int mid = st + (end-st)/2;

        if(target<arr[mid]){
            st = mid + 1;
        }
         else if(target>arr[mid]){
end = mid -1 ;
        }
        else{
            return mid;
        }
    }
    return -1;

};

int find_element(vector<int>&arr , int n , int k){
    int pivot = Getpivot(arr , n );
    if(k>arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr ,pivot ,k);
    }
    else{
return binarySearch(arr ,  0 , pivot);
    }
}
int main(){
    vector<int>arr = { 2,4,5,6};
    cout<<find_element(arr, 4 , 7);
}