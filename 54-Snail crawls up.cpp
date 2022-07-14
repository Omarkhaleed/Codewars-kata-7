int snail(int column, int day, int night) {
 if (column <= day) return 1;
      if ((column-day)%(day - night) == 0) return (column-day)/(day - night)+1;
        else return  (column-day)/(day - night) +2;
  
}


/////////////////////////////

int snail(int column, int day, int night) {
 if (column <= day)
 return 1;
      if ((column-day)%(day - night) == 0)
      return (column-day)/(day - night)+1; 
        else 
        return  (column-day)/(day - night) +2;
        }
