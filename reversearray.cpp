#include<iostream>
using namespace std;
void reverse( int arr[] , int size ){
    int start = 0;
    int end = size-1;
 while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
};
 }

void printArray(int arr [] ,int n){
    for(int i = 0;i<n;i++){
cout<<arr[i]<<" ";
    }
};
int main(){
  int arr[] = {  2 , 6, 7, 8 ,9};
int brr[] = {2 , 6, 7, 8, 6 ,9 ,0};

reverse(arr , 5);
reverse(brr, 7);

printArray(arr , 5);
cout<<endl;
printArray(brr,7);
}