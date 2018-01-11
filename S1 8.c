#include <stdio.h>
int main() {
    int age;
    int movieLenght;
    printf("Introduceti varsta si durata filmului");
    scanf("%d %d", &age, &movieLenght);
    if((age<17)and(movieLenght<90))
        printf("DISCOUNT APPLIES");
    else
        printf("NO DISCOUNT");
    return 0;
}
