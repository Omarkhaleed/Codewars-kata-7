#include <vector>

int save(std::vector<int> sizes, int hd) {
int sum=0,i;
  for( i=0;i<sizes.size();i++){
  sum+=sizes[i];
  if(sum>hd)
   break;
   }
   return i;
  
}
