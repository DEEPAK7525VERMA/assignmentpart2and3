import java.util.HashSet;
import java.util.Set;

public class FindDuplicates {
    
    public static void findAndPrintDuplicates(int[] arr) {
        Set<Integer> seen = new HashSet<>();
        Set<Integer> duplicates = new HashSet<>();
        
        for (int num : arr) {
            // Set.add() returns false if the element is already in the set
            if (!seen.add(num)) {
                duplicates.add(num);
            }
        }
        System.out.println("Duplicates found: " + duplicates);
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 2, 5, 6, 3, 1};
        System.out.print("Input Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        findAndPrintDuplicates(arr);
    }
}