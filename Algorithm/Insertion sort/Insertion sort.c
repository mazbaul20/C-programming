#include<stdio.h>
int main(){
    int arr[]={-9,4,11,2,12};
    int i,value,hole,size=5;
    for(i=0;i<size;i++){
        value=arr[i];
        hole = i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    printf("Sorted array: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
