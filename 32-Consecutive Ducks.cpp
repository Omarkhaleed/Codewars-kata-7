#include <cmath>
using namespace std; 

bool consecutiveDucks (unsigned int num)
{
if( num == 1 || num == 3 || num == 5 || num == 6 || num == 7)
    return true;
  while(num > 8) {
        if (num % 2 == 1)
            return true; 
            num/=2;
      }      
return false;
}
