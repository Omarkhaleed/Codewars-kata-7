#include <string>

using namespace std;

int getCount(const string& inputStr){
int count=0;
  for(int i=0;i<inputStr.size();i++){
  if(inputStr[i]=='a' || inputStr[i]=='o' || inputStr[i]=='e' || inputStr[i]=='i' || inputStr[i]=='u' ){
 //cout<<"vowel is"<<inputStr[i]<<endl;
 count++;
  }
  }
  return count;
} 
/*int num_vowels = 0;
  
  for(int i = 0; i < inputStr.size(); i++)
  {
    if (inputStr[i] == 'a' || inputStr[i] == 'i' ||inputStr[i] == 'o' 
        || inputStr[i] == 'u' ||  inputStr[i] == 'e')
    {
      cout << "Vowel " << inputStr[i] << endl;
      num_vowels++;
    }
  }
  
  
  return num_vowels;
  */
