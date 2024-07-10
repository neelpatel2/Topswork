// A 
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
int main (){
    int row,col;
    char ch='A';
    for(row=0;row<5;row++){
        for(col=0;col<=row;col++){
            printf("%c ",ch+col);
        }
        printf("\n");
    }
}