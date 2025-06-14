// space complexity = o(1)
// time complexity = 0(n2) for worst and o(n) for best case

// stable sorting
// ✅ Stable Sorting Algorithm
// A sorting algorithm is stable if it preserves the relative order of equal elements.

// in place sorting - It sorts the array by modifying the original array itself, rather than making a copy.

package sortingjava;

public class Bubble {
    public static void bubbleSort(int nums[]){
        int n = nums.length;
        for(int i = 0; i < n-1; i++){
            int count = 0;

            for(int j = 0; j < n-1-i; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    count++;
                }
            }
            if(count == 0){
                return;
            }
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

        System.out.println("Array after applying bubble sort");
        bubbleSort(nums);
        printArray(nums);
    }
    
}
