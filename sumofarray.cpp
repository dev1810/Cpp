#include <iostream>
using namespace std;

int sum(int arr[], int size){

    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int product(int arr[],int size){
    int prod = 1;

    for(int i = 0 ;i<size;i++){
        prod *= arr[i];
    }
    return prod;
}
int main(){
    int arr[] = {1,1,1};
    int size = 3;
    cout<<sum(arr,size)<<endl;
    cout<<product(arr,size);
    return 0;
    

}