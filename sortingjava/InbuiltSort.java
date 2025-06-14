package sortingjava;
import java.util.Arrays;
// import java.util.Collections;

public class InbuiltSort{
      public static void printArray(int nums[]){
        for(int i = 0; i < nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int arr[] = {7,6,5,4,3};
        Arrays.sort(arr);
        Arrays.sort(arr,0,3);
        // Arrays.sort(arr,Collections.reverseOrder()); work only when we declare value as Integer object
        printArray(arr);
        

        
    }
}
