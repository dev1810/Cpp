#include <iostream>
using namespace std;

int main()
{
int n = 4;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    
    for(int j=0;j<(n-2*i+2);j++){
        cout<<" ";
    }
     for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i = 0;i>n;i++){
cout<<"iteratoon"<<n;
    for(int j=n;j>=0;j--){
        cout<<"iteration"<<j;
        cout<<"";
    }
    // for(int j=0;j<n;j++){
    //     cout<<"d";
    // }
    cout<<endl;
}

}