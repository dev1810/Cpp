#include <iostream>
using namespace std;
int pow(int n)
{
    if((n & (n - 1)) == 0){
        cout<<n<<"is power of 2"<<endl;
        return n;
        
    }
    else{
        cout<<n<<"not power of 2";
        return n;
    }


}
int main(){

pow(8);
}

// Agar tumhe bina loop use kiye check karna hai ki ek number power of 2 hai ya nahi, toh bitwise operations ka use kar sakte ho.

// Concept Samajh Lo (Binary Representation Se)
// Power of 2 numbers ki ek khasiyat hoti hai:
// Inka binary representation sirf ek 1 bit rakhta hai, baaki sab 0 hote hain.
// Jaise:
// rust
// Copy
// Edit
// 1  ->  0001  (2^0)
// 2  ->  0010  (2^1)
// 4  ->  0100  (2^2)
// 8  ->  1000  (2^3)
// Mathematical Trick:
// Agar kisi number n ko n - 1 ke saath bitwise AND (&) karein, toh power of 2 hone par result zero (0) aayega.
// Kyun? Kyunki n ka binary form ek single 1 hota hai aur n - 1 ke binary form me wahi 1 wala bit 0 ban jata hai, aur uske right wale sab 1 ho jate hain.
// Example:
// markdown
// Copy
// Edit
// n  = 8  ->  1000
// n-1= 7  ->  0111
// ----------------
// 8 & 7 =   0000  (Zero, so 8 is a power of 2)