#include<stdio.h>

int main(){
    unsigned char uc1=0,uc2=1;
    while(uc2>uc1){
        ++uc1;
        ++uc2;
    }
    printf("unsigned char didziausia reiksme %u\nunsigned char maziausia reiksme %u\n", uc1, uc2);
    signed char sc1=0,sc2=1;
    while(sc2>sc1){
        ++sc1;
        ++sc2;
    }
    printf("signed char didziausia reiksme %d\nsigned char maziausia reiksme %d\n", sc1, sc2);
    unsigned int ui1=1,ui2=2;
    while(ui2>ui1){
        ++ui1;
        ++ui2;
    }
    printf("unsigned int didziausia reiksme %u\nunsigned int maziausia reiksme %u\n", ui1, ui2);
    signed int si1=0,si2=1;
    while(si2>si1){
        ++si1;
        ++si2;
    }
    printf("signed int didziausia reiksme %d\nsigned int maziausia reiksme %d\n", si1, si2);
    unsigned long int uli1=1,uli2=2;
    while(uli2>uli1){
        ++uli1;
        ++uli2;
    }
    printf("unsigned long int didziausia reiksme %lu\nunsigned long int maziausia reiksme %lu\n", uli1, uli2);
    signed long int sli1=0,sli2=1;
    while(sli2>sli1){
        ++sli1;
        ++sli2;
    }
    printf("signed long int didziausia reiksme %ld\nsigned long int maziausia reiksme %ld\n", sli1, sli2);
    unsigned long long int ulli1=1,ulli2=2000000000000;
    while(ulli2>ulli1){
        ulli1+=1000000000000;
        ulli2+=1000000000000;
    }
    ulli2=ulli1+10000000;
    while(ulli2>ulli1){
        ulli1+=10000000;
        ulli2+=10000000;
    }
    ulli2=ulli1+1;
    while(ulli2>ulli1){
        ++ulli1;
        ++ulli2;
    }
    printf("unsigned long long int didziausia reiksme %llu\nunsigned long long int maziausia reiksme %llu\n", ulli1, ulli2);
    signed long long int slli1=1,slli2=2000000000000;
    while(slli2>slli1){
        slli1+=1000000000000;
        slli2+=1000000000000;
    }
    slli2=slli1+10000000;
    while(slli2>slli1){
        slli1+=10000000;
        slli2+=10000000;
    }
    slli2=slli1+1;
    while(slli2>slli1){
        ++slli1;
        ++slli2;
    }
    printf("signed long long int didziausia reiksme %lld\nsigned long long int maziausia reiksme %lld\n", slli1, slli2);
    unsigned short int usi1=1,usi2=2;
    while(usi2>usi1){
        ++usi1;
        ++usi2;
    }
    printf("unsigned short int didziausia reiksme %u\nunsigned short int maziausia reiksme %u\n", usi1, usi2);
    signed short int ssi1=0,ssi2=1;
    while(ssi2>ssi1){
        ++ssi1;
        ++ssi2;

    }
    printf("signed short int didziausia reiksme %d\nsigned short int maziausia reiksme %d\n", ssi1, ssi2);
    return 0;
}
