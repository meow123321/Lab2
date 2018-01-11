#include <stdio.h>
#include <math.h>
float power(int x, int y, int z){
        z=pow(x,y);
        printf("Rezultatul este %d", z);
        return 0;
        }
int main()    {

    int b, e, p;
    printf("Introduceti baza si exponentul");
    scanf("%d %d", &b, &e);
    power(b, e, p);
        return 0;

}
