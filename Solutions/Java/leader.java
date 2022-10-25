// https://www.geeksforgeeks.org/leaders-in-an-array/
import java.util.ArrayList;
import java.util.Stack;

class leader{
    public static  ArrayList<Integer> findLeader(int [] arr) {
        Stack<Integer> s = new Stack<>();
        int n = arr.length;
        s.push(arr[n-1]);
        ArrayList<Integer> list = new ArrayList<>();

        // list.add(arr[n-1]);

        for(int i=n-2;i>=0;i--){
            if(arr[i] > s.peek()){
                // list.add(arr[i]);
                s.push(arr[i]);
            }
        }

        while(!s.empty()){
            list.add(s.pop());
        }
        return list;
    }
    public static void main(String[] args) {
        int [] arr = {1, 2, 3, 4, 5, 2};

        for(int i : findLeader(arr)){
            System.out.print(i + " ");
        }
    }
}