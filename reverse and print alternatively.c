#include<stdio.h>
int main()  
{  
    //Initialize array   
    int arr[] = {4,5,7,1,3,2,9,6,4,7};   
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);
      
    
    for (int i = length-1; i >= 0; i=i-2) {   
        printf("%d ", arr[i]);   
    }   
    return 0;  
}  