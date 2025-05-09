#include<iostream>
using namespace std;
// void change(int &b){
//     b= 20;
// };

// void func(){
//     int x = 0 ;
//     cout<<"x : "<<x<<endl;
// x++;
// };
  void func(){
     static int x = 0 ;
    cout<<"x : "<<x<<endl;
x++;
};
// int main(){
    // int a = 10;
    // int arr[]={
    //     4 , 7 , 8 ,9 ,5 
    // };
    // int *p = &a;
    // cout<<p<<endl;
    // p = p+1;
    // cout<<p<<endl;
    // cout<<*(arr)<<endl;
    // cout<<*(arr+1)<<endl;

    // int *ptr = &a;
    // int ** ptr2 = &ptr;
    // cout<<"a address = "<<ptr<<endl;
    // cout<<"a address = "<<&a<<endl;
    // cout<<"ptr address = "<<ptr2<<endl;
    // cout<<"value of a = "<<*(&a)<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;
//  change(a);
//  cout<<"change"<< a<<endl;
// int *ptr1;
// int *ptr2;
// // *ptr2=*ptr1 + 1;

// cout<<*ptr1<<endl;
// cout<<*ptr2<<endl;
// cout<<(*ptr1 > *ptr2)<<endl;

// }
int main(){
    func();
func() ;
func();
return 0 ;
}

