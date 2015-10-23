//
//  main.c
//  T1
//
//  Created by 彭圣 on 15/10/13.
//  Copyright © 2015年 com.pengsheng. All rights reserved.
//


//指向函数指针应用场景
#include <stdio.h>

int sum(int v1,int v2)
{
    return v1 + v2;
}

int minus(int v1,int v2)
{
    return v1 - v2;
}

int demo (int v1,int v2,int (*p)(int ,int))
{
    return p(v1,v2);
}

int main(int argc, const char * argv[])
{
    printf("sum = %i\n",demo(3, 2, minus));
    
    
    return 0;
}
