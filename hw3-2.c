#include <stdio.h>
 int main(){
    int s1, d1, s2, d2, s3, d3;

    scanf("%d%d%d%d%d%d",&s1, &d1, &s2, &d2, &s3, &d3);
    int timeline[25]={0};

    for (int i= 0; i <25; i++) {


    if (i>=s1 && i<d1) {
timeline[s1]++;
timeline[d1]--;
    }


    if (i>=s2 && i<d2) {
timeline[s2]++;
timeline[d2]--;

    if (i>=s3 && i<d3){
            timeline[s3]++;
timeline[d3]--;
    }
    }
int min_buses=0 ;


    if (timeline[i] > 0){
min_buses++;

    printf("%d\n", min_buses);
    }
}
 }


