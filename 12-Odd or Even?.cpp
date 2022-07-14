#include<string>
#include<vector>
using namespace std;
string odd_or_even(const vector<int> &arr)
{
  int sum=0;
  int len=arr.size();
  if(len==0)
    return "even";
   for(int i=0 ; i<len ; i++){
       sum+=arr[i];
   }
  if(sum%2==0)
    return "even";
  else
    return "odd";
}
