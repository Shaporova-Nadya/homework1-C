#include <stdio.h>
#include<stdbool.h>
#include "compare.h"

int compare(bool arr1[], int len1, bool arr2[], int len2)
{
    if (len1 > len2){
        return 1;
    } else if(len1 < len2){
        return -1;
    }
    for(int i = 0; i < len1; i++){
        if(arr1[i] > arr2[i]){
            return 1;
        } else if (arr1[i] < arr1[i]){
            return -1;
        }
    }
    return 0;
}

void binary(bool arr[], int len)
{
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]?"1":"0");
    }
}