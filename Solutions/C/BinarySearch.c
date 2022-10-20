//https://practice.geeksforgeeks.org/problems/binary-search/1

#include<stdio.h>

int main(){

    int n,arr[100];
    printf("Enter the Number of Elements in the Array:  ");
    scanf("%d",&n);

    printf("Enter the Elements(Sorted): \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    
    int key;
    printf("Enter the Element to Search : ");
    scanf("%d",&key);

    int found=0;
    int f=0,l=n-1;
    int m;
    while (f<=l){

        m=(f+l)/2;

        if (arr[m]==key){
            found=1;
            break;
        }

        if (arr[m]>key){
            l=m-1;
        }
        else{
            f=m+1;
        }
    }
    
    if (found==1){
        printf("Element Found");
    }
    else{
        printf("Element Not Found");
    }
    
    return m;
}
