using namespace std;
string cake(int x,string y){

  //to calculate the percentage of 70%
  float per=x*0.7;
  int  sum=0;
  //to calculate the values of characters
  for(int x=0;x<y.size();x++){
    if(x%2==0)
       sum+=(int(y[x]));
    else
      /*to calculate the odd values
      on the ordinary arrangement (-96)if we want from the index (-97)
      */
       sum+=(y[x]-96);
  }
  if(sum>per)
    return "Fire!";
  else
    return "That was close!";
  
}
