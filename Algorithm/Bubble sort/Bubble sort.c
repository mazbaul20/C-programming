#include<stdio.h>
int arr[]={5,2,9,1,6};
int i,j,size=5;
int main(){
    printf("\nBefore sorting: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}