#include<cmath>
unsigned int sum_cubes(unsigned int n) {
int num,sum=0;
for(int i=0;i<=n;i++){
sum+=pow(i,3);
}
return sum;
}
