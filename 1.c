#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    double x1,x2;
    printf("Si programa issprendzia ax^2+bx+c=0 tipo kvadratines lygtis.\nIveskite 3 sveikuosius skaicius a, b ir c:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Duomenys ivesti sekmingai\nLygties atsakymas: ");
    d = b * b - 4 * a * c;
    if(d<0){
        printf("sprendiniu nera");
    }
    else if(d==0){
        x1 = -b / (2 * a);
        printf("x=%f", x1);
    }
    else{
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%f, x2=%f", x1, x2);
    }
    return 0;
}
