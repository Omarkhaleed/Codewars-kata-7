#include <string>
#include<cmath>
using namespace std; 

string autoMorphic (int number)
{
/*
int num;
while(number<10){
 num=number*number;
if(number%10==num%10)
  return "Automorphic";
  else
  return "Not!!";
  }
  while(number>=9 && number<100){
 num=number*number;
if(number==num%100)
  return "Automorphic";
  else
  return "Not!!";
  }
  while(number>=99 && number<1000){
 num=number*number;
if(number==num%1000)
  return "Automorphic";
  else
  return "Not!!";
  }
  */
  string ss=to_string(number);
  int num;
   while(number>0){
 num=number*number;
  int p=pow(10,ss.length());
if(number==num%(p))
  return "Automorphic";
  else
  return "Not!!";
  }

}
