#include<algorithm>
using namespace std;
string reverse_letter(const string &str)
{       
  string temp="";
      int pre=str.size();
    for (int i=pre-1;i>=0;i--){
         if(str[i]>='a'&& str[i]<='z')
           temp+=str[i];
    }
  return temp;
        
}
