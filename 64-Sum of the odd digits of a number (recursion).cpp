int sum_odd_digits(int n)
{
 if (n == 0)  
 return 0;
  int sum = 0;
  if (n % 2 == 1) sum += n % 10;
  sum += sum_odd_digits(n / 10);
  return sum;
}
