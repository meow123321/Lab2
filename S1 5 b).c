#include <stdio.h>
#include <math.h>
int main() {
    int n2[10];
    int i, n;
    double n10;

    printf("Numarul de elemente ale sirului este: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Intorduceti primul element: ");
        scanf("%d", n2[i]);
        }
    n10=0;
    for(i=0;i<n; i++) {
            if(n2[i]==0)
            i++;
    else
        n10=n10+ n2[i]*pow(2,i);
    }
        printf("Numarul in baza 10 este %.2lf", &n10);

        return 0;
}
