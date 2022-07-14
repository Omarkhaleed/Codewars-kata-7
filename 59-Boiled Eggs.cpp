unsigned int cookingTime(unsigned int eggs) {
if(eggs==0)
return 0;
if(eggs>0 && eggs<=8)
return 5;
if(eggs>8 && eggs%8!=0)
return ((eggs/8)+1)*5;
if(eggs>8 && eggs%8==0)
return ((eggs/8)*5);

}
