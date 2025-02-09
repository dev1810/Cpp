#include <iostream>
using namespace std;
int  prime(int x){
    // int is_prime =
    int cnt = 0; 
    for(int i = 2;i<=x;i++){
        if(x%i==0){
            cnt++;
        }

    }
    if(cnt>2){
        cout<<"not a prime"<<endl;
        
    }
    else if(cnt <= 2 ){
        cout<<"prime";
        
    }
cout<<cnt;
    return cnt;
}

int main(){

cout<<prime(36);

}

// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n < 2) return false; // 0 and 1 are not prime numbers
//     if (n == 2 || n == 3) return true; // 2 and 3 are prime

//     if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate even numbers and multiples of 3

//     for (int i = 5; i * i <= n; i += 6) { 
//         if (n % i == 0 || n % (i + 2) == 0) 
//             return false;
//     }

//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num))
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;

//     return 0;
// }
