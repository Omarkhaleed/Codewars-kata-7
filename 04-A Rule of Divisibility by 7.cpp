class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m){
     int count = 0;
    while (m > 99) {
      //Do all the operation im one line 
        m = (m / 10) - (2 * (m % 10));
        count++;
    }
     return std::make_pair(m, count);  
      }
};
