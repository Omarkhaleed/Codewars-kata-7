#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
 sort(numbers.begin(),numbers.end());
 return (long)numbers[0]+(long)numbers[1];
 }
