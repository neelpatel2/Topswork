 // calculation of 2 Numbers 
 #include<stdio.h>
int main(){
int num1, num2, result;
printf("Enter numl and num2:");
scanf("%d %d",&num1,&num2);
result=num1+num2;
printf("\n Addition:%d", result);
result=num1-num2;
printf("\nSubtraction:%d", result);
result=num1*num2;
printf("\nMultiplication :%d", result);
result=num1/num2;
printf("\ndivision :%d", result);
result=num1%num2;
printf("\n Modulo:%d", result);
}