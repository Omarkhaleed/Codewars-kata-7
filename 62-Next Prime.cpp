#include<cmath>
bool is_prime(int num) {
  for (int i = 2; i <= sqrt(num); ++i) if (num % i == 0) { return false; }
  return num != 1;
}

int nextPrime (int num ) {
  while (true) {
      num += 1;
      if (num == 2 || is_prime(num)) return num;
  }
}
