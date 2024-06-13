#include<stdio.h>
int main (){
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int row=0,col;
    int end=size-1,num=1;
    int arr[size][size];
    for(row=0;row<=size/2;row++,end--){
        for(col=row;col<=end;col++){
            arr[row][col]=num++;
        }
        for(col=row+1;col<=end;col++){
            arr[col][end]=num++;
        }
        for(col=end;col>=row;col--){
            arr[end][col]=num++;
        }
        for(col=end-1;col>=row;col--){
            arr[col][row]=num++;
        }
    }
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    }
    