//#include <stdio.h>
//#include "studarr.h"
//
//void display(int *n, int i) {
//    int sum = 0, max = 0, min = 0;
//    if (i > sizeof(n) + 1) {
//        printf("Total marks: %d\n", sum);
//        printf("Average marks: %f\n", (float) sum / (sizeof(n) + 2));
//        printf("Maximum marks scored: %d\n", max);
//        printf("Minimum marks scored: %d\n", min);
//    } else {
//        sum += n[i];
//        printf("%d\n", n[i]);
//        if (n[i] > max) {
//            max = n[i];
//        }
//        if (n[i] < min) {
//            min = n[i];
//        }
//        display(n, i + 1);
//    }
//}
//
//
//
////int min_max(int *n, int i, int max, int min) {
////    if (i >= sizeof(n)) {
////        return 1;
////    } else {
////        if (n[i] > max)
////            max = n[i];
////        if (n[i] < min)
////            min = n[i];
////    }
////}
//
//int main() {
//    for (int i = 0; i < 10; i++) {
//        printf("Enter marks of student %d: \n", i + 1);
//        scanf("%d", &a[i]);
//    }
//
//    display(a, 0);
//}


#include <stdio.h>

int main() {
    int ss, teams, left;
    printf("Number of students:\n");
    scanf("%d", &ss);

    printf("Number of teams:\n");
    scanf("%d", &teams);

    printf("The number of students in each team is %d and left out is %d\n", ss / teams, ss % teams);
}