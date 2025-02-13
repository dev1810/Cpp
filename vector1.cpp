#include<iostream>
#include<vector>

using namespace std;
//syntax to write vector and for each loop
int main(){

    vector<int>v = {1,2,3,4,5,6};

    for(int val:v){
        //cout<<(val+1)<<endl;
        cout<<(val)<<endl;
    }
    return 0;


}