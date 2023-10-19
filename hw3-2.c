#include <stdio.h>
 int main(){
    int s1, d1, s2, d2, s3, d3;
    int time_point[3]={0};
    scanf("%d%d%d%d%d%d",&s1, &d1, &s2, &d2, &s3, &d3);

    for (int i= 0; i < 3; i++) {
    if (i>=s1 && i<d1) {
    time_point[i]++;
    }
    if (i>=s2 && i<d2) {
    time_point[i]++;
    }
    if (i>=s3 && i<d3){
    time_point[i]++;
    }
    }
    int min_buses=0 ;
    for (int i = 0; i < 3; i++) {
    if (time_point[i] > 0){
    min_buses++;
    }

    }
    printf("%d\n", min_buses);
    }




