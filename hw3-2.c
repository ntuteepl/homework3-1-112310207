
#include<stdlib.h>

int main(void){
	int s1,d1,s2,d2,s3,d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    if(0 < s1 && s1 <= d1 && d1 <= 24){

		printf("%d%d\n",s1,d1);}

	if(0 < s2 && s2 <= d2 && d2 <= 24){
		printf("%d%d\n", s2, d2);
	}



	if(0 < s3 && s3 <= d3 && d3 <= 24){
		printf("%d%d\n", s3, d3);
	}


	int bus=1 ;
	if (d1>s2){
		bus+=1;
	}
	if(d1>s3 && d2>s3){
		bus+=1;
	}
	printf("%d\n",bus);
    return 0;
}

    
