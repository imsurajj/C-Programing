// Write 50 Students Marks and Find the average of the marks using an array
#include <stdio.h>
int main()
{
    // Array to store the marks of 50 students
    int marks[50] = {85, 78, 92, 70, 88, 91, 76, 84, 77, 89,
                     65, 90, 74, 80, 87, 69, 95, 86, 82, 72,
                     73, 94, 81, 79, 83, 96, 68, 93, 67, 85,
                     75, 99, 71, 66, 78, 100, 88, 91, 76, 84,
                     77, 89, 65, 90, 74, 80, 87, 69, 95, 86};

    int total = 0; // Store total marks
    float average; // Store avg marks

    // Loop to calculate the total marks
    for (int i = 0; i < 50; i++)
    {
        total += marks[i];
    }

    // Calculate the average
    average = total / 50.0;

    // Display the average marks
    printf("The average marks of the students is: %.2f\n", average);

    return 0;
}
