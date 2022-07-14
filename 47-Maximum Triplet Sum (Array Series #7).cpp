#include <vector>
#include<algorithm>
using namespace std; 

int maxTriSum (vector <int> numbers)
{
 sort(numbers.rbegin(), numbers.rend());
unique (numbers.begin(), numbers.end());
  
  return numbers[0] + numbers[1] + numbers[2];

}
