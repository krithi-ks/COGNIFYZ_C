// C PROGRAM - COGNIFYZ
// TASK 6 - STUDENT GRADE CALCULATOR

#include <stdio.h>

int main (void)
{
    int n;

    // Read number of subjects
    printf("\nEnter the number of subjects: ");
    scanf("%d" ,&n);

    float grade[n], sum = 0, avg = 0;
    char sub[50][50];

    // Read name of the subject and grades
    for (int i = 1; i <= n; i++) {
        printf("\nEnter the name of subject %d: ", i);
        scanf("%s", sub[i]);
        printf("Enter the grade of %s: ", sub[i]);
        scanf("%f", &grade[i]);
        // Add the grades
        sum += grade[i];
    } 
    
    // Student Grade List
    printf("\nYOUR GRADE DETAILS:\n");
    for  (int i = 1; i <= n; i++) {
        printf("%d. %s = %.2f\n", i, sub[i], grade[i]);
    }
    printf("\nTOTAL GRADE = %.2f\n", sum);

    // Average grade
    avg = sum / n;
    printf("YOUR AVERAGE GRADE IS %.2f", avg);
}