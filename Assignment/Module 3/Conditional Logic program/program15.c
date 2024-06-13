/*/ Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 /*/
int main() {
    int mathMarks, physicsMarks, chemMarks, totalMarks, mathPhysicsTotal;

    printf("Enter the marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter the marks in Chemistry: ");
    scanf("%d", &chemMarks);
    printf("Enter the marks  in Mathematics: ");
    scanf("%d", &mathMarks);

    totalMarks = mathMarks + physicsMarks + chemMarks;
    mathPhysicsTotal = mathMarks + physicsMarks;

    if ((mathMarks >= 65) && (physicsMarks >= 55) && (chemMarks >= 50) && (totalMarks >= 190)) {
        printf("The candidate is eligible for admission.\n");
    } else if (mathPhysicsTotal >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    printf("\nDetailed Marks:\n");
    printf("Total Marks: %d\n", totalMarks);
    printf("Math + Physics: %d\n", mathPhysicsTotal);

    return 0;
}
