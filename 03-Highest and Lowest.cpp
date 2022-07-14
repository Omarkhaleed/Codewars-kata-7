#include <string>
#include <sstream>
#include <vector>
using namespace std;
std::string highAndLow(const std::string& numbers){
  //your code here
  vector<int> v;
  stringstream s{numbers};
  string ss="";
 while(s>>ss){
  v.push_back(stoi(ss));
  }
  sort(v.rbegin(),v.rend());
  ss=to_string(v[0])+ " "+to_string(v[v.size()-1]);
  
  return ss;
  
}
