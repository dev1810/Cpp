#include <iostream>
using namespace std;

int main(){

int n = 4;

for(int i = 0;i<n;i++){

    for(int j = 0;j<n-i-1;j++){

        cout<<" ";
    }
    
    cout<<"*";
    if(i!=0){
        for(int j=0;j<2*i-1;j++){
                    cout<<" ";
            }
            cout<<"*";

    }
    
    cout<<endl;

    
}
for(int m=0;m<n-1;m++){

    for(int j=0;j<m+1;j++){
        cout<<" ";
    }
    cout<<"*";
    if(m!=n-2){
 for(int k=0;k<2*(n-m)-5;k++){
            cout<<" ";
    }
         cout<<"*";
    }
   
    cout<<endl;
}


}