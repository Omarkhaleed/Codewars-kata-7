#include <string>
using namespace std; 
int fact(int n){
int f=1;
for(int i=1;i<=n;i++){
  f*=i;
}
return f;
}
string strong_num (int number )
{
int sum=0,number1;
number1=number;
while(number1>0){
 sum+=fact(number1%10);
number1/=10;
}
if(sum==number)   
    return "STRONG!!!!" ; 
    else
    return "Not Strong !!";
}
