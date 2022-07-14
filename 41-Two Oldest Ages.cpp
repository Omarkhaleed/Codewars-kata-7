#include <vector>

std::vector<int> two_oldest_ages(std::vector<int> ages)
{
int size=ages.size();
    sort(ages.begin(),ages.end());
    return {ages[size-2],ages[size-1]};
}
