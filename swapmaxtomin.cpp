#include <iostream>
using namespace std;

void swapi(int arr[], int n){

    int maxi =   INT_MIN;
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
       maxi = max(maxi,arr[i]);

       cout<<"maxi"<<i<<" "<<maxi<<endl;
        mini = min(mini,arr[i]);
        cout<<"mini"<<i<<" "<<mini<<endl;

    }
    
    swap(maxi,mini);

}
int main(){
    int arr[] = {1,2,3};
    int size = 3;
    swapi(arr,size);
    for(int i = 0;i<size;i++){
        //cout<<"swapped array"<<arr[i]<<endl;
        cout<<arr[i]<<" ";
    }


}