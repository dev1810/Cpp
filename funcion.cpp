#include<iostream>

using namespace std;
string helloWorld(string str){

    cout<<"the input you loaded "<<str<<endl;
    return str;
}
int multiply(int x, int y){
    int ans = x*y;
    return ans;
}
int main(){
   int answer =  multiply(1,2);
//helloWorld("hi");
    cout<<answer;
   return answer;
}