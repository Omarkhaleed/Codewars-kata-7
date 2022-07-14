using namespace std;
int house_numbers_sum(const vector<int> &arr)
{
  int sum=0;
  int n=arr.size();
  for(int i=0 ;i<=n;i++){
    if(arr[i] != 0) {
      sum+=arr[i];
    }
    else{
      return sum;
    }
    }
    return sum;
  }
