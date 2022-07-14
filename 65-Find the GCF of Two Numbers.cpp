int findGCF(int a, int b)
{
 if(a==0)
 return b;
 if(b==0)
 return a;
 if(a==b)
 return a;
 if(a>b)
   return findGCF(a-b, b); 
  return findGCF(a, b-a); 
}
