#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    vector<int>arr=  {0,1,2,3,4};
    for(int i =0 ;i<=5;i++){
      if(arr[0]<arr[i++]){
        cout<<arr[i];
      }
    }
}