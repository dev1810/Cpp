#include <iostream>
using namespace std;



int main()
{
    int n = 5;
    int arr[n]={1,2,3,4,5};

   
    for(int i =0;i<n;i+=2){
        if(i+1 < n){ //edgecase
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}