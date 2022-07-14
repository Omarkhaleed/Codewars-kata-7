#include <string>
using namespace std;
string cat_mouse(string x) {
    int count=0;
    for(int i=0;i<x.size();i++){
      if(x[i]=='.')
        count++;    
    }
  if(count>3)
  return "Escaped!";
  else
    return "Caught!";
}
