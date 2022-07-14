long long reverseNumber(long long n) {
int num,rem=0;
  while(n!=0){
  num=n%10;
  rem=(rem*10)+num;
  n/=10;
}
return rem;
}
