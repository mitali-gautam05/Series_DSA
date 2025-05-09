#include<iostream>
using namespace std;
 void update(int arr[] ,  int size){
    cout<<"inside a function"<<endl;
    arr[0] = 123;
    for( int i=0 ; i<3 ;i++){
        cout<<arr[i]<<endl;
     }
     cout<<"going back"<<endl;
 }
int main(){
    int arr[3] = { 1 , 5, 6,};
 update(arr , 3);
}