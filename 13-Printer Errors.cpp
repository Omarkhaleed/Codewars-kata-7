using namespace std;
class Printer
{
public:
    static string printerError(const string &s){
        int len=s.size();
      int count=0;
       for(int i=0 ; i <= len ; i++){
         if(s[i]>'m' && s[i]<='z')
           count++;
       }
      string result= to_string(count)+"/"+to_string(len);
      return result;
    }
};
