package arrayjava;

public class SubArray {
    public static void subArray(int nums[]){
        int total = 0;
            for(int st = 0; st < nums.length; st++){
                for(int en = st; en < nums.length; en++){
                    for(int i = st; i <= en; i++){
                        System.out.print(nums[i]);
                    }   
                    total++;

                    System.out.print(" ");
                }
                System.out.println();
            }
            System.out.println("Total subarray:" + total);

        
    }
    public static void main(String[] args) {
        int nums[] = {1,2,3,4,5};
        subArray(nums);

        
    }
    
}
