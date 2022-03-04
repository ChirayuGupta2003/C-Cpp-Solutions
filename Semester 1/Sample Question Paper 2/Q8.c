//#include <stdio.h>
//
//int main() {
//    char name[20];
//    int user_id;
//    float bill, units;
//
//    printf("Enter the user id of user: \n");
//    scanf("%d", &user_id);
//
//    printf("Enter the name of user: \n");
//    scanf("%s", name);
//
//    printf("Enter the number of units consumed by user: \n");
//    scanf("%f", &units);
//
//    if (0 < units && units <= 100)
//        bill = units;
//    else if (100 < units && units <= 300)
//        bill = units * 2;
//    else if (units > 300)
//        bill = units * 3;
//    else
//        bill = 50;
//
//    if (bill > 1000)
//        bill = (float) (bill * 1.15);
//
//
//    printf("%d %s %.2f", user_id, name, bill);
//}

#include <stdio.h>


int main() {
    int x, y;
    char q[] = {};
    scanf("%d", &x);
    gets(q);
    scanf("%d", &y);

    printf("%d %s %d", x, q, y);
}
