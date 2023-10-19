#include <stdio.h>
  main(){
    int s1, d1, s2, d2, s3, d3;
    int events[6];
    scanf("%d%d%d%d%d%d",&s1, &d1, &s2, &d2, &s3, &d3);

    for (int i = 1; i < 6; i++) {
    int key = events[i];
    int j = i - 1;
    while (j >= 0 && events[j] > key) {
    events[j] = events [j + 1] ;
    j = j - 1;
    }
     events[j+1]= key;
    }


    int buses = 0;
    int largest_vehicle=0;
    int need_vehicle=0;
    for (int i = 1; i < 6; i++) {
    if (i % 2 == 0) {

    } else {

    if (need_vehicle > largest_vehicle) {
    largest_vehicle = need_vehicle;
    }
    }
    }
    printf("%d\n", largest_vehicle);
    }
