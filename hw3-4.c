#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 生成随机的4位答案
void generateAnswer(int answer[4]) {
    
   
int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;

    for (int i = 0; i < 4; i++) {
        int index = rand() % n;
        answer[i] = digits[index];
        
        answer[i] = digits

        answer[i

        answer
// 从数组中删除已使用的数字
        for (int j = index; j < n - 1; j++) {
            digits[j] = digits[j + 
            digits[j] = digits
1];
        }
        n--;
    }
}


        }
        n--;

        }
        n

        }

       
// 计算猜测结果
void evaluateGuess(int answer[4], int guess[4]) {
    int A = 0; // 正确数字且位置正确的数量
    int B = 0; // 正确数字但位置不正确的数量

    

   
for (int i = 0; i < 4; i++) {
        
       
if (guess[i] == answer[i]) {
            A++;
        } 
            A++;
        }
else {
            for (int j = 0; j < 4; j++) {
                if (guess[i] == answer[j]) {
                    B++;
                    
                    B++;

                   
break;
                }
            }
        }
    }

    
                }
            }
        }
    }


                }
            }
        }
   

                }
            }
        }

                }
            }
       

                }
            }
printf("%dA%dB\n", A, B);
}

int main() {
    srand(time(
    srand(time

   
NULL));
    
   
int answer[4];
    generateAnswer(answer);

    
    generateAnswer(answer);

   

    generateAnswer(answer);


    generateAnswer(answer

    generate

   
printf("欢迎来到猜数字游戏！\n");
    printf("猜测一个4位数字，每个数字都不同。\n");

    

int attempts = 0;
    while (1) {
        int guess[4];
        
       
printf("请输入你的猜测: ");
        if (scanf("%1d%1d%1d%1d", &guess[0], &guess[1], &guess[2], &guess[3]) != 4) {
            printf("请输入一个4位不同的数字。\n");
            while (getchar() != '\n'); // 清空输入缓冲
            continue;
        }

        attempts++;
        evaluateGuess(answer, guess);

        
        }

        attempts++;
        evaluateGuess(answer, guess);

       

        }

        attempts++;
        evaluateGuess(answer, guess);


        }

        attempts++;
        evaluateGuess(answer,

        }

        attempts++;
        evaluate

        }

        attempts++;

        }

if (guess[0] == answer[0] && guess[1] == answer[1] && guess[2] == answer[2] && guess[3] == answer[3]) {
            
           
printf("恭喜你猜中了答案 ");
            for (int i = 0; i < 4; i++) {
                printf("%d", answer[i]);
            }
            
            }

           
printf("！\n");
            printf("你用了 %d 次猜测。\n", attempts);
            
           
break;
        }
    }

    
        }
    }


        }
   

       
return 0;
}
