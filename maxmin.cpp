#include<iostream>
#include<climits>
using namespace std;
int main(){
int maxValue = INT_MIN;
int minValue = INT_MAX;
maxValue = 0;
minValue= 0;
int n = 5 ;
int arr[5] = {56, 78, 23, 8, 32,};
for ( int i = 0; i < n ; i++){
    if(arr[i]> maxValue){
        maxValue = arr[i];
//    cout<<"max"<<ma;xValue;
};
//  else if(arr[i]< minValue){
//     arr[i]= minValue;
// };
// cout<<"max"<<maxValue;
};
for ( int i = 0; i < n ; i++){
     if(arr[i]< minValue){
        arr[i]= minValue;
    };
};
cout<<"max"<<maxValue;
cout<<"min"<<minValue;
}