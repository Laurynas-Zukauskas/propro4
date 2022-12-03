#include<stdio.h>
#include<math.h>

int DBD(int x, int y);

int main(){
    int a,b,c,dbd,mbk;
    printf("Si programa isveda skaiciu a, b ir c didziausia bendra dalikli ir maziausia bendra kartotini.\nIveskite 3 sveikuosius skaicius a, b ir c:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Duomenys ivesti sekmingai\n");
    dbd = DBD(DBD(a,b),c);
    mbk = a * b / DBD(a,b);
    mbk = mbk * c / DBD(mbk,c);
    printf("Didziausias bendras daliklis: %d\nMaziausias bendras kartotinis: %d", dbd, mbk);
    return 0;
}
int DBD(int x, int y){
    while((x != 0 )&& (y != 0)){
        if(x < y) y = y % x;
        else x = x % y;
    }
    return x + y;
}
