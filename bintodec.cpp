#include <iostream>
using namespace std;
int Decimal(int bnum){//10
int answer = 0;
int i =0;
int pow = 1;
        while(bnum>0){
            
            
            int lstdigit = bnum % 10; //0 //1
            cout<<i<<"round"<<lstdigit<<endl;
            int newnumber = bnum / 10; //1 //0
            int res = lstdigit * pow; //0 //1*2=2
            cout<<i<<"round res"<<res<<endl;
            pow *= 2;
            answer += res;//0 //2
            bnum = newnumber;//1
            i++;
        }
        
    
    cout<<answer;
    return answer;


}
int main(){

    Decimal(100);
}