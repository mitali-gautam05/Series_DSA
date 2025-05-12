#include<iostream>
using namespace std;
 long long int binarySearch(int num){
     long long int s = 0 ;
    int e = num;
    long long int ans = -1;
long long int mid = s+(e-s)/2;
    while(s<=e){
    if(mid*mid == num){
        return mid;
    }
     if(mid*mid<num){
        ans = mid ;
       s = mid+1;
    }
    else {
        e = mid-1;
    }
    mid = s+(e-s)/2;
}
return mid;
 };
 int main(){
    cout<<binarySearch(36);
 }