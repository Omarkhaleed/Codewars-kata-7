public class SimpleFun {
    public static int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
          int height = 0;
        int answer = 0;
        while(height<desiredHeight){
          answer++;
          if(height+upSpeed>=desiredHeight) return answer;
          height+=upSpeed-downSpeed;
        }
        return answer;
        
    }
}
