//{ Driver Code Starts
import java.util.*;

public class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character
        while (t-- > 0) {
            List<String> names = new ArrayList<>();
            String input1 = sc.nextLine();
            Scanner ss1 = new Scanner(input1);
            while (ss1.hasNext()) {
                names.add(ss1.next());
            }
            Solution obj = new Solution();
            String res = obj.longest(names);
            System.out.println(res);
        
System.out.println("~");
}
    }
}

// } Driver Code Ends



class Solution {
    public String longest(List<String> names) {
        int maxIndex = 0; // Index of the longest string
        for (int i = 1; i < names.size(); i++) { // Start from 1 since maxIndex is 0
            if (names.get(i).length() > names.get(maxIndex).length()) {
                maxIndex = i; // Update maxIndex
            }
        }
        return names.get(maxIndex); // Return the longest string   
        }
}
