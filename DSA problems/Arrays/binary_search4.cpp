#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canDistribute(int n , vector<int> nums , int minProduct , int size){
  int storeCount =0;
    for(int i =0; i<size ; i++){
        int count = (nums[i] + minProduct -1)/minProduct;
        storeCount += count;
    }
    if(storeCount<=n) return true;
    else return false;

}
int main (){
    vector<int> nums ={1, 1, 1, 100};
    int n =7;
    int size=nums.size();
    int ans =-1;
    // total product sum 
    int totalProduct =0;
    for(int i=0 ; i<size ;i++){
            totalProduct += nums[i];
    }
    // binary search '
    int st=1 ;int end =*max_element(nums.begin() , nums.end());
    while(st<=end){
        int mid=st +(end-st)/2;
        // if we want to move to the left 
        if(canDistribute(n , nums , mid  , size )==true){ ans = mid;
            end=mid-1;
        }else {
            st=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
