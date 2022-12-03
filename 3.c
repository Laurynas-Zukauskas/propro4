#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,f0,f1,f2;
    double x1,x2;
    printf("Si programa isveda c-taji panasios i fibonacio sekos nari, kai nulinis narys yra a, o pirmas narys b\nIveskite 3 sveikuosius neneigiamus skaicius a, b ir c:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Duomenys ivesti sekmingai\nAtsakymas: ");
    if(c == 0){
        printf("%d", a);
    }
    else if(c == 1){
        printf("%d", b);
    }
    else{
        f0 = a;
        f1 = b;
        for(int i = 2; i <= c; i++){
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        printf("%d", f1);
    }
    return 0;
}
