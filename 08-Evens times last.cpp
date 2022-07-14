#include <vector>
using namespace std;
int even_last(vector<int> nums) {
  int length=nums.size();
  int sum=0;
  if(length==0)
    return false;
    for (int i=0;i<length;i+=2){
        sum+=nums[i];
      }
    
  return (sum*nums[length-1]);
}
