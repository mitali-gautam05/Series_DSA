#include<iostream>
#include<vector>
using namespace std;
 int last_first(vector<int>&nums , int target){
    int st = 0 ,  end = nums.size()-1;
    int ans;
    while(st<=end){
        int mid = st + (end-st)/2;
if( nums[mid] == target){
 ans = mid ;
 end = mid-1;
}
if(nums[mid]>target){
    end = mid -1;
}
if(nums[mid]<target){
    st = mid + 1;
};
}
return ans;
 }
 int last(vector<int>&nums , int target){
    int st = 0 ,  end = nums.size()-1;
    int ans;
    while(st<=end){
        int mid = st + (end-st)/2;
if( nums[mid] == target){
 ans = mid ;
 st = mid+1;
}
if(nums[mid]>target){
    end = mid -1;
}
if(nums[mid]<target){
    st = mid + 1;
};
}
return ans;
 }
int main(){
vector<int>nums = { 3 , 7 , 34 , 78 , 34, 90};
cout<<"first occurence"<<last_first(nums , 34);
cout<<"last occurence"<<last(nums, 34);
};