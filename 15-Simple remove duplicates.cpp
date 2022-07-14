#include <vector>
using namespace std;
vector<int> solve(vector<int>vec){  
    for(size_t i = 0; i < vec.size(); i++){
      for(size_t j = i+1; j < vec.size(); j++){
        if(vec[i] == vec[j]){
          vec.erase(vec.begin() + i);
          i--;
        }
      }
      }
    
  return vec;
}
