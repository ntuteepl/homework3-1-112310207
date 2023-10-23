#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;






// 输入三笔订单的出发时间和返回时间

    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);



int num_of_vehicles = 1;  // 初始化车辆数量为1，第一笔订单无需判断




// 检查第二笔订单是否与第一辆车的任务冲突
    if (s2 < d1) {
        // 如果冲突，需要新增一辆车
        num_of_vehicles++;
    }






// 检查第三笔订单是否与已有车辆的任务冲突


if (s3 < (d1 > d2 ? d1 : d2)) {


// 如果冲突，需要新增一辆车
        num_of_vehicles++;
    }




printf("%d\n", num_of_vehicles);



return 0;
}
