#include <iostream>
using namespace std;

int reverse(int n)
{
    int newnumber = 0;
        for(int i = 0 ;i<n;i++){
            int lastdigit = n % 10;
            
            newnumber = newnumber*10 + lastdigit;
            n /= 10;
        }
        cout<<newnumber;
        return newnumber;
}
int main(){
    reverse(23);

}