using namespace std;
string bumps(string road){
   int count=0;
  for (int i=0;i<road.size();i++){
        if(road[i]=='n')
          count++;
  }
  if(count>15)
    return "Car Dead";
  else
    return "Woohoo!";
}
