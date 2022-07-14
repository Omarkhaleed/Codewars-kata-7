#include <vector>

bool invite_more_women(const std::vector<int> &invited) {
int result=0;
  for(int i=0; i<invited.size(); i++)
  {
    result+=invited[i];
  }
  if(result<=0) { return false; }
  else { return true; }

}
