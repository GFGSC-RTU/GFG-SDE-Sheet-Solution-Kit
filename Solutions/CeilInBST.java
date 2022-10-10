  //https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
public static int ceilite1(Node root , int x) {
         int res = -1;
         Node ref = null; // for making reference to the previous node.
         while(root!= null)
         {
             if (root.key == x)
             {
                 return root.key;
             }
             // if current value is greater then the x
             // if x is smaller than the current value
             else if (root.key > x){
                 ref = root;
                 root = root.left;
             }
             // if current value is smaller than the x
             // if x is greater than the current value
             else{
                    root = root.right;
             }
         }
         return ref.key;
    }
