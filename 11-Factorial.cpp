long long factorial(int n){
 // Insert brilliant solution here
    
       long long fact=1;
        for( int i=1;i<=n;i++){
          fact*=i;
        }
  return fact;
}
