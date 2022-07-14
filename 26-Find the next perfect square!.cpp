#include<algorithm>
#include <cmath>
long int findNextSquare(long int sq) {
  
  double root=sqrt(sq);
  // to check if the number is float or not if it is float return -1;
  if(int(root) == root)
  return pow(root+1,2);
  return -1;
}
