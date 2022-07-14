#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  
  int flag=1;
  for(int i=0;i<arr.size();i++){
    if(arr[i]<=limit)
      flag=1;
    else{
      flag=0;
      break;
  }
    }
  return(flag==0?false:true);
}
