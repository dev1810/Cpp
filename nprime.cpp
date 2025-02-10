#include <iostream>
using namespace std;

bool prime(int n){
   
    for(int i=2;i<n/2;i++){
        
        if(n % i == 0){
            //cout<<i<< "composite "<<endl;
            return false;
        }
        else{
            
            return true;
            
        }

    }
}

int main(){
    int n = 12;
    for(int i = 2;i<n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
            
    }
    

}
// bool isPrime(int n)
// {
//     // since 0 and 1 is not prime return false.
//     if (n == 1 || n == 0)
//         return false;

//     // Run a loop from 2 to n-1
//     for (int i = 2; i < n; i++) {
//         // if the number is divisible by i, then n is not a
//         // prime number.
//         if (n % i == 0)
//             return false;
//     }
//     // otherwise, n is prime number.
//     return true;
// }

// // Driver code
// int main()
// {
//     int N = 10;

//     // check for every number from 1 to N
//     for (int i = 1; i <= N; i++) {
//         // check if current number is prime
//         if (isPrime(i))
//             cout << i << " ";
//     }

//     return 0;
// }