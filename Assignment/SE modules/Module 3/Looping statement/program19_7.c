// *
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
#include <stdio.h>

int main() {
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
    printf("\n");
}
for(row=5-1;row>=1;row--){
    for(col=1;col<=row;col++){
        printf("* ");
    }
    printf("\n");
  }

}