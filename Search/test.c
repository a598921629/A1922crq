#include "search.h"
#include <stdio.h>
int main() 
{
	int len = 100000;
	int a[100000];
	int i;
	for (i = 0; i < len; ++i) 
				a[i] = i;

		int r = Sequential_Search(a, len, 2) ;
			int s = Binary_Search1(a, len, 2) ;
				int t = Binary_Search2(a, 0, len - 1, 2) ;
					printf("使用顺序查找的结果是%d\n",r) ;
						printf("使用二分查找的结果是%d\n",s) ;
							printf("使用哈希查找 查找的结果是%d\n",t) ;

								return 0;
}

