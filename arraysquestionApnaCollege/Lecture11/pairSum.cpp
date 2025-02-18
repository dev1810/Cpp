#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    int size = nums.size();
    vector<int> answer;
    int start = 0;
    int end = size-1;

    while(start < end)
    {
        int pairSum = nums[start]+nums[end];
        
        if(pairSum < target){
            start++;
        }
        else if(pairSum > target){
            end--;
        }
        else{
            answer.push_back(start);
            answer.push_back(end);
            return answer;
        }

    }
    return answer;
   

}

int main(){

    int target = 6;
   // int n=  5;
    vector<int>nums = {1,2,3,4,5};

    vector<int>ans = pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1] <<endl;
    return 0;
}