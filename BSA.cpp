#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr , int target){
    int st = 0 ,  end = arr.size()-1 ; 

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
int main(){
    vector<int>arr1 = {  6 , 7, 0 , 1 ,2 , 3 , 4,5 };
int target1 = 0;
 
cout<<binarySearch(arr1 , target1)<<endl;

}