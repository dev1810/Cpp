#include<iostream>
#include<vector>

using namespace std;

//int subarray(int arr[],int )
//BRUTE FORCE;
int main()
{
    int n = 7;
    int greatest = INT_MIN;
    
    int arr[]= {3,-4,5,4,-1,7,-8};
    

    for(int i =0;i<n;i++){
        int currSum = 0;
        for(int j = i;j<n;j++){
            currSum += arr[j];
            greatest = max(greatest,currSum);
        }
    }
   

    cout<<"the greatest sub array sum"<<greatest<<endl;
    return 0 ;

}