#include <stdio.h>
int main() {
    int t, p;   //elevii trecuti, elevii picati
    int i;
    int n, a;   //numarul de elevi, notele elevilor
    int S;      //numarul de elevi cu nota mai mare de 8
    float x;

    printf("Introduceti numarul de elevi: ");
    scanf("%d", &n);
    t=0;
    p=0;
    S=0;
    for(i=1; i<=n; i++) {
        printf("Intorduceti nota elevului: ");
        scanf("%d", &a);
        if (a>=5)
            t++;
        else
            p++;
    }
    if (t==n)
        printf("Toti elevii au trecut\n");
    else
        printf("Nu toti elevii au trecut\n");
    for (i=1;i<=n; i++) {
        printf("Intorduceti nota elevului: ");
        scanf("%d", &a);
    if (a>=8)
            S++; }
    if (S!=0)
            x=(S/(float)n)*100;
    printf("\nProcentul de elevi cu nota mai mare ca 8 este %.2f", x);

    return 0;

}
