package com.Akash;


import java.util.Arrays;
import java.util.Scanner;

public class reverse_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int size = sc.nextInt();
        int [] arr = new int[size];
        System.out.println("Enter the size of sub array: ");
        int k = sc.nextInt();
        for (int i = 0; i < size; i++) {
            System.out.println("Enter the element: ");
            arr[i] = sc.nextInt();
        }
//            System.out.println(Arrays.toString(arr));

        reverse(arr, k);
        System.out.println(Arrays.toString(arr));
    }
    static void reverse(int[] arr, int k) {

        for (int i = 0; i < arr.length; i=i+k) {

            int start = i;
            int end = Math.min(i+k-1,arr.length-1);

            while(start < end) {
                // swap
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
    }

}

