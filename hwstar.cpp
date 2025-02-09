#include <iostream>
using namespace std;

int main(){
//************************* */
// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// int n = 5;
// char ch = 'A';
//     for(int  i =0 ;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<ch;
//             ch = ch+1;
//         }
//         cout<<endl;
//     }


// int m = 1;
// int n = 4;
// int m = 1;
// int num = 1;
// char ch = 'A';
// for(int i = 0;i<n;i++){

//     for(int j = 0;j<i+1;j++){
//         cout<<ch;
      
//     }
//      ch = ch+1; 
//     // num++;
//     // m++;
//     cout<<endl;
// }



// for(int i = 0;i<n;i++){  
// int num = 1;  
//     for(int j =i+1;j>0;j--){
//         cout<<j;
//        // num++;
//     }
//     cout<<endl;
// }
// int n = 4;
// // int num = 1;
// char ch = 'A';
// for(int  i = 0;i<n;i++){

//     for(int j = 0;j<i+1;j++){
//         cout<<ch;
//          ch = ch+1;
//     }
   
//  cout<<endl;
// }
int n = 4;

for(int i =0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        for(int k = 0;k<n-i;k++){        
            cout<<(i+1);
        }
        
        cout<<endl;
}
}
