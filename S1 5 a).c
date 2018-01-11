#include <stdio.h>
#include <math.h>
int main(){
    int n10, n2[64];
    int i;
    {
        printf("Introduceti numarul in baza 10: ");
        scanf("%d", &n10);

        for(i=0;n10!=0;i++){
            n2[i]=n10%2;
            n10=n10/2;

        }
        for( ;i>=0;i--)
            printf("%d\n",n2[i]);

        return 0;
}
