#include<iostream>

using namespace std;
void fibonachi(int n){
int first = 0;
int second = 1;
    for(int i=0;i<n;i++){
        cout << first<<" ";
        int temp = first  + second; 
        first = second;
        
        second  = temp;
 
    }
    

}
int main(){

    fibonachi(5);
    return 0 ;
}