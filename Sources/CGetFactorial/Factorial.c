//
//  Factorial.c
//  
//  Created by Mike Griebling on 2021-12-15.
//

#include <stdio.h>

long factorial(long n) {
    long result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}
