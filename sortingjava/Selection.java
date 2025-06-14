// space complexity = o(1)
// time complexity = 0(n2) for both best and worst case

// use case -> when array size is small
// unstable sorting

package sortingjava;

public class Selection {
    public static void selectionSort(int nums[]){
        int n = nums.length;
        for(int i = 0; i < n-1; i++){
            int min = i;
            for(int j = i+1; j < n; j++){
                if(nums[j] < nums[min]){
                    min = j;
                } 
            }

            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
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

        System.out.println("Array after applying selection sort");
        selectionSort(nums);
        printArray(nums);
    }
    
}
