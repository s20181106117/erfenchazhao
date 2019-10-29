//
//  main.c
//  erfenchazhao
//
//  Created by s20181106117 on 2019/10/15.
//  Copyright © 2019 yxy. All rights reserved.
//

#include <stdio.h>
struct 
int main(int argc, const char * argv[]) {
    bs(<#int tbl#>, <#int k#>);
    
    return 0;
}
int bs(List tbl,ElementType k)
{
    int left,right,mid,NoFound=-1;
    left = 1;
    right = tbl->Length;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(k<tbl->Element[mid])  right = mid-1;
        else if(k>tbl->Element[mid])  left = mid+1;
        else return mid;
    }
    return NoFound;
}
