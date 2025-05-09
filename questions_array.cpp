// #include<iostream>
// using namespace std;
// void swapping(int arr[], int size){
//     int start = 0  ;
//     int end = size -1;
// while(start < end ){
//     for(int i = 0 ; i<size ;i+=2){
//  swap(arr[i] , arr[i+1]);
// int t ;
// t = arr[i];
// arr[i] = arr[i+1];
// arr[i+1] = t;
//  start++;
//  end--;
// }
// }
// };
//  void print(int arr[], int size){
//     for(int i= 0;i<size;i++){
//         cout<<arr[i];
//     }
//  }
// int main(){
//     int arr[] = { 3 , 6 , 8 , 7 , 5 ,0};
//     swapping(arr , 6);
//     print(arr , 6);
// }


//LINEAR SEARCH
// #include<iostream>
// using namespace std;
// void search(int arr[] , int size , int t)
// {
// for(int i = 0; i<size ; i++){
// if(arr[i] == t){
//     cout<<"found"<<" "<<arr[i]<<" "<<"at index"<<" "<<i<<endl;
// };
// }
// };


// int main(){
// int arr[] ={ 4 , 6, 7, 8, 9 , 90} ;
// search(arr , 6 , 90);
// return 0;
// }


//UNIQUE ELEMENT 
// #include<iostream>
// using namespace std;
// int  unique( int arr[] , int size){
//     int ans = 0 ;
//     for(int i = 0;i<size ; i++){
//         ans ^= arr[i];
//     }
//     cout<<ans;
//     return ans;
// };
// int main(){
//     int arr[]= { 3 , 5, 6,7 ,8 ,8,3 , 7,5};
//     unique(arr ,9 );
//     return 0;
// }


//DUPLICATE EXCEPT ONE CASE

// class Solution {
//     public:
//         int findDuplicate(vector<int>& nums) {
//             int ans = 0;
//             for(int i = 0 ; i<nums.size();i++){
//                 ans = ans^nums[i];
//             }
    
//             for(int i = 0 ;i<nums.size();i++){
//                 ans = ans^i;
//                 if(nums[i]== nums[1]){
//                     return nums[1];
//                 }
//             }
//             return ans;
//         }
//     };
      
//SORT 0 1
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int i ;
// vector<int>arr = { 0 , 1 , 1, 0 , 1 , 0};

// sort(arr.begin(),arr.end());
// for(i = 0 ;i<arr.size() ;i++){
// cout<<arr[i];
// }
// }


//FIRST AND LAST OCCURENCE OF A NUMBER
#include<iostream>
#include<algorithm>
using namespace std;

int firstOcc(int arr[], int n , int t){
    int st = 0;
    int end = n - 1;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == t){
   ans = mid;
   end = mid -1 ;
        }
        else if(t < arr[mid])
        {
            end = mid -1;
        }
        else {
            st = mid + 1;
        }
      }
    return ans ;
};

int lastOcc(int arr[], int n , int t){
    int st = 0;
    int end = n - 1;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;
     
        if(arr[mid] == t){
   ans = mid;
 st = mid + 1 ;
        }
        else if(t < arr[mid])
        {
            end = mid -1;
        }
        else {
            st = mid + 1;
        }
      }
    return ans ;
};
int main(){
    int arr[8] = {  0 , 1 ,2, 2, 2, 2 , 4 , 6};
cout<< "first occurence"<< " "<<firstOcc(arr , 8 , 2)<<endl;
 cout<<"last occurence"<< " "<<lastOcc(arr , 8 , 2)<<endl;
 return 0;
}


//