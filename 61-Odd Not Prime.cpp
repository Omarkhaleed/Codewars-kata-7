bool isprime(int n){
if(n==1)
return false;
for(int i=2;i<n/2;i++){
if(n%i==0){
return false;
}
}
return true;
}

unsigned int oddNotPrime(unsigned int n){
int count=0;
for (int i=1;i<=n;i+=2){
if(!isprime(i))
count++;
}
 return count;
}
