int countZero(std::string s)
{ 
  int size=s.size();
   int count=0,count1=0,count2=0;
   for(int i=0; i<size;i++){
     if(s[i]== '6'|| s[i]=='9' || s[i]=='0' || s[i]=='b' 
        || s[i]=='p' || s[i]=='o'  || s[i]=='e' || s[i]=='d'
        || s[i]=='a' || s[i]=='O' || s[i]=='P' || s[i]=='g' 
        || s[i]=='D'|| s[i]=='q'  || s[i]=='Q' || s[i]=='R' || s[i]=='(' && s[i+1]==')'){
       count1++;
     }
     else if ( s[i]=='B' || s[i]=='8' || s[i]=='&' || s[i]=='%'){
       count2+=2;
     
   }
     else
       count=0;
     }
  
     return(count1+count2);

  }
