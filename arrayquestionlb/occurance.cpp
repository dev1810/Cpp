#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n  = 5;
    int ans = 0;;
    vector<int>nums = {1,2,3,2,3};
    vector<int>newar;
    for(int  i :nums){
        ans = ans ^ i;

        if(ans == 0){
            newar.push_back(i);
        }
        
    }
   for(int i :newar){
    cout<<i;
   }
}