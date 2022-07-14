#include <string>

bool valid_spacing(const std::string& s) {
   int count=0;
   int ss=s.size();
  for ( int i=0 ; i <= (ss-1) ; i++){
    
    if (s[i]== ' ' && s[i+1]==' ')
      return false;
    
    if(s[0] == ' ' || s[ss-1] == ' ')
      return false;
  }
 
    return true;
}
