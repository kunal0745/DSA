package arrayjava;

public class KadanesAlgo {
    public static int kadane(int num[]){
        int cs = 0;
        int maxSub = Integer.MIN_VALUE;

        for(int i = 0; i < num.length; i++){
            cs += num[i];
            maxSub = Math.max(cs, maxSub);

            if(cs < 0){
                cs = 0;
            }
        }
        return maxSub;
    }
    public static void main(String[] args) {
        int nums[] = {12,-2,-1,-5,22};
        int max = kadane(nums);
        System.out.println("max sub array sum:" + max);

    }
    
}
