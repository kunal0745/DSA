// Brute force approach
package arrayjava;

public class MaxSubArraySum1 {
    public static int maxSubArraySum(int nums[]){
        int maxSum = Integer.MIN_VALUE;

        for(int st = 0; st < nums.length; st++){
            int currSum = 0;

            for(int en = st; en < nums.length; en++){
                currSum += nums[en];
            }
            if(currSum > maxSum){
                maxSum = currSum;
            }
        }
        return maxSum;
    }

    public static void main(String[] args) {
        int nums[] = {2,-3,6,5,11};
        int  max = maxSubArraySum(nums);
        System.out.println("Max sum is:" + max);
    }
    
}
