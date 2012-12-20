//
//  main.c
//  pyramid
//
//  Created by Alykhan Kanji on 20/12/12.
//  Copyright (c) 2012 Alykhan Kanji. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

int main(int argc, const char * argv[])
{
	int n = 0, inverted = 0, i = 0, j = 0;
	printf("Please enter the number of rows you would like in your pyramid: ");
	scanf("%d",&n);
	assert(n > 0);
	printf("Please enter 1 if you would like your pyramid to be inverted, 0 otherwise: ");
	scanf("%d",&inverted);
	assert(inverted == 0 || inverted == 1);
	char a[n][n*2-1];
	if (!inverted) {
		for (i=0; i < n; i++) {
			for (j=0; j < n*2-1; j++) {
				a[i][j] = ' ';
				if (n-1-i <= j && j <= n-1+i && a[i][j-1] != '*') {
					a[i][j] = '*';
				}
			}
		}
	} else {
		for (i=0; i < n; i++) {
			for (j=0; j < n*2-1; j++) {
				a[i][j] = ' ';
				if (n-1-(n-1-i) <= j && j <= n-1+(n-1-i) && a[i][j-1] != '*') {
					a[i][j] = '*';
				}
			}
		}
	}
	
	for (i=0; i < n; i++) {
		for (j=0; j < n*2-1; j++) {
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
