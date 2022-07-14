#include <vector>
using namespace std; 

vector <int> extraPerfect ( int number )
{ 
vector <int>v;
for(int x=1;x<=number;x+=2)
v.push_back(x);
  return v;
}
