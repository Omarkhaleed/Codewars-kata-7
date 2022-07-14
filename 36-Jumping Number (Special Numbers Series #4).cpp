#include <string>
#include<cmath>
using namespace std; 
string jumpingNumber (int number){
if(number<10)
return "Jumping!!";
string x=to_string(number);
for(int i=0;i<x.size()-1;i++){
if(abs(x[i]-x[i+1])!=1)
return "Not!!";
}
return "Jumping!!";
}
