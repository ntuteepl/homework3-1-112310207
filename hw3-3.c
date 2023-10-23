#include <stdio.h>
#include <stdlib.h>

    int main(){
    int num1, num2, a1, a2, a3, a4, b1, b2, b3, b4,numplus1,numplus2;
    scanf("%d%d", &num1, &num2);
    a1 = num1 / 1000;
    a2 = (num1 % 1000) / 100;
    a3 = (num1 % 100) / 10;
    a4 = (num1 % 10);
    b1 = num2 / 1000;
    b2 = (num2 % 1000) / 100;
    b3 = (num2 % 100) / 10;
    b4 = (num2 % 10);
    numplus1 = a1 + a2 + a3 + a4;
    numplus2 = b1 + b2 + b3 + b4;
    if (numplus1 > numplus2) printf("%d", num2);
    else if (numplus1 < numplus2) printf("%d", num1);
    else {
          if (num1 < num2) printf("%d", num1);
          else printf("%d", num2);
    }
}

