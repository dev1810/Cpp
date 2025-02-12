#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    int ind_small ;
    int ind_large ;
    for(int i = 0;i<size;i++){
       
        cin>> marks[i];

    }
    int small = INT_MAX;
    int large = INT_MIN;
    for(int i = 0;i<size;i++){
       if(marks[i]<small){
            small =   marks[i];      
            ind_small = i;
       }
       else if(marks[i] > large){
        large =   marks[i];  
        ind_large = i;
       }
        

    }
   

    cout<<"small"<<small<<endl;
    cout<<"small index"<<ind_small<<endl;
    cout<<"large"<<large<<endl;
    cout<<"large index"<<ind_large<<endl;
    return 0;
}