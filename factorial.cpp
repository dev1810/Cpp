#include<iostream>

using namespace std;

// int fact(int x){
//     int ans=1;
//     for(int i=1;i<=x;i++){
//         ans = ans*i;
//     }
//     return ans;
// }
int sumd(int num){
   
    int sum=0;
    while(num > 0 ){

        int lastdigit = num %10;
        num = num/10;

        sum += lastdigit;
    }
   
   return sum;
}
int main(){
  
   cout<<sumd(32);
   
}

// jab digit ka sum nikalna ho to 
// 1. 2 kaam krne h
// 2. pehla ki modulo karo number ke
// 3. fir us number ko chota kardo 10  se divide karke
// 4. digit = 234 sum = 0 + 2, sum = 2
//      sum = 2 + 3; => sum = 5,
//      sum = 5 + 4; => sum = 9;