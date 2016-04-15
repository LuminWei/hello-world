//
//  main.c
//  abundantNumber
//
//  Created by Lu on 4/15/16.
//  Copyright © 2016 LuminWei. All rights reserved.
//
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int count;
    int sum;
    int i, j;
    int sr;
    while (1) {
        scanf("%d",&n);
        count = 0;
        for (i = 1; count < n; i++) {
            sum = 1;
            sr = sqrt(i);
            for (j = 2; j <= sr; j++) {
                if ( i % j == 0) {
                    sum += j;
                    sum += (i / j);
                }
            }
            j--;
            if ( j * j == i ) {
                sum -= j;
            }
            
            if (sum > i) {
                count++;
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}
