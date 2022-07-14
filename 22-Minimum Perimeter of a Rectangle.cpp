bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
            return true;
}   
int minimumPerimeter(int area)
{
    if (isPrime(area))
        return (2*(area + 1));
    
        int x, h, per = area;
        int size = area / 4;
        for (int i = 1; i <= size; i++) {
            for (int j = i; j <= size; j++) {
                if (i * j == area) {
                    if ((2 * (i + j)) < per) {
                        x = i;
                        h = j;
                        per = 2 * (x + h);
                    }

                }
            }
        }

        return per;
    }
