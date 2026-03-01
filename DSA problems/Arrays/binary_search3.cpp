#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible ( vector<int> nums , double h ,int  n , int speed ){
double totalTime =0; 
for(int i=0; i<n ; i++){ int timeTaken =0; double reachingMoment =0;
   
    if(i==n-1){
      reachingMoment = (double) nums[i]/speed;
    } else{
        timeTaken = (nums[i] +speed -1)/speed;
    }
    totalTime += (timeTaken +reachingMoment) ;
}
if(totalTime <= h) return true;
else return false;
}
 
int main (){
    vector<int>nums ={100000};
  int n =nums.size(); double h=1.0;
    int ans =-1;
   //binary search
   int st=1; int end =*max_element(nums.begin() , nums.end());
 
   while(st<=end){
    int mid=st + (end-st)/2;
    // when we move to the left
    if(isPossible(nums , h , n  ,mid)==true){
        ans=mid;
        end=mid-1;
    }else{
        st=mid+1;
    }

   }
   cout<<ans;
   return 0;
}