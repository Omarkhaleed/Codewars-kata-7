#include <string>
#include<algorithm>
using namespace std;
std::string disemvowel(std::string str)
{
     for(int i = 0; i <= str.length(); i++) {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i') {  
      str.erase(str.begin()+i); 
      }
   if(str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I') {
    str.erase(str.begin()+i); 
      }
      
if(str[i] == 'a' || str[i] == 'u') { str.erase(str.begin()+i); } 
}
return str;
}
  
