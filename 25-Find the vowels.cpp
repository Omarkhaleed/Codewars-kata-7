#include <vector>
#include <string>

std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int>res;
    for(int i=0 ; i < word.size(); i++){
         if (    word[i]=='a' || word[i]=='o'
              || word[i]=='u' || word[i]=='e'
              || word[i]=='i' || word[i]=='y' 
              || word[i]=='A' || word[i]=='O'
              || word[i]=='U' || word[i]=='E'
              || word[i]=='I' || word[i]=='Y'
             )
          res.push_back(i+1);
}
  return res;
  }
