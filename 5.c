#include<stdio.h>
#include<math.h>

int main(){
    int n;
    double a,suma,vid,maks=-9999999,mini=999999999;
    printf("Si programa tarp n skaiciu suranda ju suma, vidurki, didziausia ir maziausia reiksmes.\nIveskite skaiciu n:\n");
    scanf("%d",&n);
    if(n<1){
        printf("Skaicius n turi buti naturalusis.");
    }
    else{
        printf("Iveskite %d realiuju skaiciu:\n", n);
        for(int i=0;i<n;++i){
            scanf("%lf", &a);
            if(a>maks) maks=a;
            if(a<mini) mini=a;
            suma+=a;
        }
        vid=suma/n;
        printf("Suma: %lf\nVidurkis: %lf\nMaksimumas: %lf\nMinimumas: %lf", suma,vid,maks,mini);
    }
    return 0;
}
