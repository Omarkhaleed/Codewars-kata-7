long long over_the_road(long long address, long long n) {
      
if (n == address)
  
   return (n+1);  // first case
  
else if( ( n%3 == 0 && address%3 == 0 && address < n ) || ( n%2 == 0 && address%2 == 0 && address < n )) 
  
    return ((n+1)+(n-address)); // second case // sixth case
  
else if( ( n%3 == 0 && address%3 == 0 && address > n )  || ( n%2 == 0 && address%2 == 0 && address > n ))
  
    return ((n+1)-(address-n));  // third case // seventh case
  
else if( ( n%3 == 0 && address%2 == 0 && address < n )  || ( n%2 == 0 && address%3 == 0 && address < n ))
  
    return (((n+1)-address)+n);  // fourth case // eighth case
  
else   // if( ( n%3 == 0 && address%2 == 0 && address > n ) ||  ( n%2 == 0 && address%3 == 0 && address > n ))
  
    return (n-(address-(n+1))); // fifth case  // ninth case
}
