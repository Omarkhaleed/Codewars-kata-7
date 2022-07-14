#include<vector>
std::vector<int> climb(int n)
{
    std::vector<int>array;
  int result=n;
  while(result>0){
    array.push_back(result);
    result/=2;
  }
  sort(array.begin(), array.end()) ;
  return 
