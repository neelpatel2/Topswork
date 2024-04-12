#include<stdio.h>
int main (){
    int row,col,num=1;
    for(row=0;row<=5;row++){
        for(col=0;col<row;col++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}