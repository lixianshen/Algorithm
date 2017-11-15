//
//  main.c
//  排序算法
//
//  Created by quemos on 2017/11/15.
//  Copyright © 2017年 quemos. All rights reserved.
//

#include <stdio.h>

/// 交换2个数 可以为小数
void swapTwoNum( int arr[], int i, int j);
/// 交换2个数 不能为小数
void swapTwoInt( int arr[], int i, int j);
/// 冒泡
void bubbleSort(int arr[], int length);

int* getRandArray(int maxSize, int maxValue);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int testTime = 500000;
    int maxSize = 100;
    int maxValue = 100;
    int arr[] = {1,4,5,3,8,12,30,9};
    bubbleSort(arr, 8);
    
    int arr2 = getRandArray(50, 50);
   
    return 0;
}

/// 冒泡排序
void bubbleSort(int arr[], int length){
  
    if (length < 2) {
        return;
    }
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            
            if (arr[i] > arr[j]) {
            
                swapTwoInt(arr, i, j);
            }
        }
    }
}

/// 交换 数组中的2个数
void swapTwoNum( int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
/// 交换2个数 不能为小数
void swapTwoInt( int arr[], int i, int j){
    
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
}

/// 随机生成数组
int* getRandArray(int maxSize, int maxValue) {
    
    
    int key = rand()%maxSize + 1;
    int arr[key];
    for (int i = 0;i < key; ++i) {
        arr[i] = rand()%maxValue + (-maxValue);
    }
    return arr;
}


























