#include<cmath>
bool is_square(int n)
{
/*if(n==0)
return true;
for(int i=0;i<n;i++)
if(pow(i,2)==n)
  return true;
 // else 
 // return false;
}
*/
    if(n<0)
    return false;
      int s=sqrt(n) ;
      return (s*s==n);
        }
