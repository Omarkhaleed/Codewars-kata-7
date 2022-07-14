#include <string>

using namespace std; 

string specialNumber (int number)
{
if(number<=5){
return "Special!!";
}
  string s=to_string(number);
  for(int i=0;i<s.size();i++){
  if(s[i]>'5')
  return "NOT!!";
  }
 return "Special!!";
}
