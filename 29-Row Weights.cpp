public class Solution
{
    public static int[] rowWeights (final int[] weights)
    {
    int sum1=0,sum2=0;
    for(int i=0;i<weights.length;i+=2)
    sum1+=weights[i];
     for(int j=1;j<weights.length;j+=2)
    sum2+=weights[j];
        return new int[]{sum1, sum2}; 
    }
}
