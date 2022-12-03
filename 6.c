#include<stdio.h>
#include<math.h>

int main(){
    char a[1000];
    int i,j,maxi=0;
    double b,maxb;
    printf("Si programa teigiamu skaiciu sekoje randa ta skaiciu, kuris turi daugiausiai skaitmenu.\nIveskite teigiamu skaiciu seka, kurios pabaiga zymi neteigiamas skaicius:\n");
    scanf("%s", a);
    b=atoi(a);
    if(b<=0){
        printf("Seka neturi nariu.");
        return 0;
    }
    while(b>0){
        i=1;
        j=0;
        while(a[i]!='\0'){
            if(a[i]=='.'){
                ++j;
            }
            ++i;
        }
        if(i-j>maxi){
            maxi=i-j;
            maxb=b;
        }
        scanf("%s", a);
        b=atoi(a);

    }
    printf("daugiausiai skaitmenu turejo skaicius %lf",maxb);
    return 0;
}
