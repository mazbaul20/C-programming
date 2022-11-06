#include<stdio.h>
int main(){
    int arr[100]={8,2,1,22,55};
    int i,j,size=5;
    printf("Before sorting: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    //start sorting program
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
