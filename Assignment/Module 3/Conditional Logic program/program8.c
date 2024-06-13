/*/  WAP to accept the height of a person in centimeters and categorize the 
person according to their height. /*/
#include <stdio.h>

int main() {
    float height;

    printf("Enter the person's height in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("The person is categorized as Dwarf.\n");
    } else if (height >= 150.0 && height <= 165.0) {
        printf("The person is categorized as Average Height.\n");
    } else if (height > 165.0 && height <= 195.0) {
        printf("The person is categorized as Taller.\n");
    } else {
        printf("The person's height falls outside the categorized range.\n");
    }
}
