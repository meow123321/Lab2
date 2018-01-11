#include <stdio.h>
#include<math.h>
int main(){
    int i;
    int A[10]={1,-2,5,35,-34,23,6,-7,123,-234};
    int max, min;
    for(i=0; i<10; i++){
        if(A[i]<A[i+1])
            max=A[i+1];
        else
            max=A[i];
    }
    printf("maximul=%d\n", max);
    for(i=0; i<10; i++){
        if(A[i]<A[i+1])
            min=A[i];
        else
            min=A[i+1];
    }
    printf("minimul=%d", min);


    return 0;
}
