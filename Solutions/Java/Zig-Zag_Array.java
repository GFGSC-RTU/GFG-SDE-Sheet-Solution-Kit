// Program For Converting Array Into Zig-Zag Pattern
import java.util.Arrays;  
public class ZigzagArrayExample  
{  
//function to convert array in zigzag form  
public static void zigZag(int arr[])  
{  
boolean flag = true;  
int temp =0;  
//loop iterate over the array  
for (int i=0; i<=arr.length-2; i++)  
{  
if (flag)  
{  
//execute if elements are in the order a > b > c  
if (arr[i] > arr[i+1])  
{  
//swapping logic  
temp = arr[i];  
arr[i] = arr[i+1];  
arr[i+1] = temp;  
}  
}  
else  
{  
//execute if elements are in the order a < b < c  
if (arr[i] < arr[i+1])  
{  
//swapping logic  
temp = arr[i];  
arr[i] = arr[i+1];  
arr[i+1] = temp;  
}  
}  
if(flag==true)  
flag=false;  
else  
flag=true;  
}  
}  
public static void main(String args[])  
{  
//array to be convert into zigzag form  
int arr[] = {2, 4, 5, 1, 7, 6, 8};  
//function calling  
zigZag(arr);  
//prints the zigzag array  
System.out.println(Arrays.toString(arr));  
}  
}
