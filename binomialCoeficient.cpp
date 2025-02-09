#include <iostream>
using namespace std;
int bCof(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact *= i;
    }
return fact;

}
int nCr(int n,int r){
    if(n>r){
        int fct_n = bCof(n);
    
        int fct_r = bCof(r);
        int fct_nmr = bCof(n-r);
        int ans = fct_n / (fct_r * fct_nmr);
        return ans;
    }
    else{
        cout<<"n should be greater than r";
        
    }

}
int main(){
   
     cout<<nCr(2,4);
    
//return 0;

}