#include <iostream>

using namespace std;
int  binary(int n){
    int power = 1;
    int answer=0;
    while(n>0){
        int questnt = n / 2;
        int rem = n % 2;
        n = questnt;
        //cout<<"q"<<questnt<<endl;

        answer += (rem *power);
        power *= 10;
        //power++;
        
        cout<<"rem"<<rem<<endl; 
    }
    cout<<"answer"<<answer;
    return answer;
    

}
int main(){
    binary(3);
}