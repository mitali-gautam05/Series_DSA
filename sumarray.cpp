#include<iostream>
using namespace std;
int main(){
    int arr[7]={  1 , 5, 6, 7, 9,48 , 89};
    int sum = 0;
    for(int i = 0;i<7;i++){
        arr[i]+= sum;
        sum = arr[i];
    };
    cout<<"sum of array "<<sum<<endl;
    
}