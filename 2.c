#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d=0;
    double x1,x2;
    printf("Si programa isveda visus intervale (a;b] esancius skaicius, kuriu liekana is c yra 1.\nIveskite 3 sveikuosius skaicius a, b ir c:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Duomenys ivesti sekmingai\nRezultatai: ");
    if(b<=a){
        printf("b turi buti didesnis nei a");
    }
    else if(c == 0){
        printf("c negali buti lygus 0");
    }
    else{
        for(int i = a + 1; i <= b; ++i){
            if(i % c == 1){
                printf("%d ",i);
                ++d;
            }
        }
        if(d == 0) printf("tokiu skaiciu nera");
    }
    return 0;
}
