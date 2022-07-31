#include <iostream>
// FINAL PROJECT FOR EDX COURSE C PROGRAMMING: LANGUAGE FOUNDATIONS
/*
 You just computed final scores for all of the students in your classroom and would like to tell each student their ranking when compared to the other students in your class. For example, if Remi's score is 14, Yan's score is 2 and Maria's score is 20 then Remi's ranking is 2 since he has the second highest score, Yan's ranking is 3 since he has the lowest score and Maria's ranking is 1 since she has the highest score amongst the three students.

 You'll be given the following inputs: first the number of students, then all of the students' final scores, then finally, all of the students' names. Be sure to look at the example below.

 Your output should be one line per student, with each line displaying the student's name followed by "rank is" followed by the student's rank.

 The order in which names are displayed in the output should be the same as the order given in the input. The ranking starts at 1 (meaning this student has the highest score), 2 for the second highest grade etc...

 Note that no name has more than 50 characters and there are no more than 30 students.

 Example:

 Input

 3
 14
 2
 20
 Remi
 Yan
 Maria

 Output

 Remi rank is 2
 Yan rank is 3
 Maria rank is 1
 */
 
using namespace std;
int main(void) {

    int numOfStudents = 0;
    int i;
    int j;
    int swapScore = 0;
    int swapOrder = 0;
    int order = 0;
    char name[51];

    cin >> numOfStudents;

    int scores[numOfStudents][2];

    for (i = 0; i < numOfStudents; i++) {
        cin >> scores[i][0];
        scores[i][1] = (i + 1);
    } // end if

    for (i = 0; i < numOfStudents - 1; i++) {
        for (j = 0; j < numOfStudents - i - 1; j++) {
            if (scores[j][0] < scores[j+1][0]) {
                swapScore = 0;
                swapOrder = 0;
                swapScore = scores[j][0];
                swapOrder = scores[j][1];
                scores[j][0] = scores[j+1][0];
                scores[j][1] = scores[j+1][1];
                scores[j+1][0] = swapScore;
                scores[j+1][1] = swapOrder;
            } //end if
        } // end inner for
    } // end outer for

    for (i = 0; i < numOfStudents; i++) {
        cin >> name;
        order++;
        for (j = 0; j < numOfStudents; j++) {
            if (scores[j][1] == order) {
                printf("%s rank is %d\n", name, j + 1);
                break;
            } // end if
        } // end inner for
    } //end outer for
    return 0;
} // end main
