// Brute force approach
package arrayjava;

public class MaxSubArraySum1 {
    public static int maxSubArraySum(int nums[]){
        int maxSum = Integer.MIN_VALUE;

        for(int st = 0; st < nums.length; st++){
            int currSum = 0;

            for(int en = st; en < nums.length; en++){
                currSum += nums[en];
                maxSum = Math.max(currSum, maxSum);

            }
            
        }
        return maxSum;
    }

    public static void main(String[] args) {
        int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
        int  max = maxSubArraySum(nums);
        System.out.println("Max sum is:" + max);
    }
    
}
