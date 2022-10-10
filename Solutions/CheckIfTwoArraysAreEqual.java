 // Problem link : https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1

 public class CheckIfTwoArraysAreEqual 
{   
public static void main (String[] args)    
{   
//defining arrays to be compare   
int[] a1 = new int[] {1, 2, 3};   
int[] a2 = new int[] {1, 2, 3};   
//comparing references using == operator  
//works the same as a1.equals(a2)   
if (a1 == a2)   
System.out.println("Arrays are equal.");   
else  
System.out.println("Arrays are not equal.");   
}   
}  