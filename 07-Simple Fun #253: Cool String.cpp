#include <string>
using namespace std;
bool cool_string(string s){
    int length=s.length()-1;
    int flag=0;
  for(int i=0;i<length;i++)
    {
      if (((int(s[i])>=65 && int(s[i])<=90) && (int(s[i+1])>=97 && int(s[i+1])<=122)) || ((int(s[i])>=97 && int(s[i])<=122) && (int(s[i+1])>=65 && int(s[i+1])<=90)))
      {
        flag=1; 
      }
    else
      {
      flag=0;
      break;
    }
 }
  if(flag==0)
    {
    return false;
    }
  return true;
  
}
