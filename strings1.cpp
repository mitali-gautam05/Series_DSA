// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// // //     int str[100];
// // //     cout<<" enter the sentence"<<endl;
// // //     cin.getline(str , 100 ,'$' );
// // //     cout<<str<<endl;
// // //     return 0;
// // // }
// // // string str = "my name is mitali";
// // // cout<<str;

// // // string s1 ="hello";
// // // string s2="goal";
// // // string s3 = s1 + s2;//concatenation
// // // cout<<s3;


// // // 
// // // string s1 = "helo";
// // // string s2 = "mitali";
// // // cout<<(s1>s2)<<endl;


// // // string s ;
// // // // cin>>s;
// // // getline(cin ,s);
// // // // cout<<"output"<<s;
// // // for(int i =0 ; i<=s.length();i++){
// // //     cout<<"output"<<"  "<<s<<endl;;
// // // };

// // // }
// // string s = "hello re";
// // // int arr [] = {3 , 6, 7, 8};
// // // int n ;
// // // int st = 0; 
// // // int end= n-1;
// // // while(st<end){
// // // for(int i=0 ; i<=n;i++){
// // // swap(arr[st],arr[end]);
// // // st++;
// // // end--;
// // // }
// //   reverse(s.begin(),s.end());
// // cout<<s<<endl;
// // // }
// // return 0;
// // }

// class Solution {
//     public:
//         string reverseVowels(string s) {
//            char vowels[11]={'a ' , 'e' , 'i' , 'o', 'u' , 'A','E','I','O','U'};
//     int st = 0 ;
//     int end = s.size()-1;
//     while(st<end){
//         for(int i =0 ; i<end ; i++){
//             if(i == vowels[11]){
//                 reverse(s[st],s[end]);
//                 st++;
//                 end--;
//             }
//             else{
//                 st++;
//                 end--;
//             }
//         }
//     }
    
//         }
        
//     };
//     int main(){
//         int s;
//         Solution s1;
//         s1.reverseVowels();
    
//     }
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