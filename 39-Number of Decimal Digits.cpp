int digits(uint64_t n) {
int count=0;
if(n==0)
return 1;
else
  while(n!=0){
  n=n/10;
  ++count;
  
  }
    return count;
  }
