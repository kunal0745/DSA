// time complexity = 0(n2) for worst and o(n) for best case

package sortingjava;

public class Insertion {
     public static void insertionSort(int nums[]){
        int n = nums.length;
        for(int i = 1; i < n; i++){
           int curr = nums[i];
           int prev = i - 1;
           
           while(prev >= 0 && nums[prev] > curr){
            nums[prev + 1] = nums[prev];
            prev--;
           } 

           nums[prev + 1] = curr;

        }
    }
    

    public static void printArray(int nums[]){
        for(int i = 0; i < nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {3,2,8,5,6};

        System.out.println("Array before sorting:");
        printArray(nums);

        System.out.println("Array after applying insertion sort");
        insertionSort(nums);
        printArray(nums);
        
    }
    
}
