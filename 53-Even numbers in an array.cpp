#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
std::vector<int> even;

  for(unsigned int i(0) ; i < arr.size(); i++ )
  { 
    if(arr[i] % 2 == 0 )
      even.push_back(arr[i]);
  }
      return {even.end() - n  , even.end()};
}
