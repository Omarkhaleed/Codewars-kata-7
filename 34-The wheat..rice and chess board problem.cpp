#include<cmath>
unsigned int squaresNeeded(long long n){
if(n==0)
  return 0;
  for(int i =1;i<=n;i++){
  if(pow(2,i)-1 >= n)
  return i;
  }
}
