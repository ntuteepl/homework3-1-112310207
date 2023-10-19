#include <stdio.h>

int main() {
    
   
int s1, d1, s2, d2, s3, d3;

    

   


// 输入三个任务的发车时间和返回时间
    
   
scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    

   


// 创建一个数组来存储所有任务的时间戳
    
   
int timestamps[24] = {0};

    

   


// 标记任务时间段
    
   
for (int i = 0; i < 24; i++) {
        
       
if (i >= s1 && i < d1) {
            timestamps[i]++;
        }
        
            timestamps

           
if (i >= s2 && i < d2) {
            timestamps[i]++;
        }
        
            timestamps[i]++;
        }
       

            timestamps[i]++;
        }

            timestamps[i]++;
       

            timestamps[i]++;
if (i >= s3 && i < d3) {
            timestamps[i]++;
        }
    }

    
            timestamps[i]++;
        }
    }

   

            timestamps[i]++;
        }
    }


            timestamps[i]++;
        }
   

            timestamps[i]++;
        }

            timestamps[i]++;
       

            timestamps[i]++;

            timestamps[i

            timestamps

           
int min_buses = 0;

    

   


// 扫描时间戳数组，计算所需的最少遊覽車数量
    
   
for (int i = 0; i < 24; i++) {
        
       
if (timestamps[i] > 0) {
            min_buses++;
        }
    }

    
            min_buses++;
        }
    }

   

            min_buses++;
        }
    }


            min_buses++;
        }
   

            min_buses++;
        }

            min_buses++;
       

            min_buses++;

            min_buses

            min_b

            min

           
// 输出最少需要的遊覽車数量
    
   
printf("%d\n", min_buses);

    

   


return 0;
}

}
``

}



