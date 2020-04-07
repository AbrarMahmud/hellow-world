#include <stdio.h>
#pragma warning(disable : 4996)



int main()
{
	int n;
	scanf("%d",&n);

	printf("%d", n / 100 + n / 20 % 5 + n / 10 % 2 + n / 5 % 2 + n / 1 % 5);

	/*..................REASON FOR THIS ALGORITHM...........................
        if n == 125 then n/20 will result in 6(C language truncates 6.25 into 6)
		but we know within these 6 twentys(20) 5 of them can be used to create 100
		so 6%5 elemenates possible combination of 100 ......and results in only 1 twenty dollar
		bill which is logical.....................because 6%5 == 1
		*/
	system("PAUSE");
	return 0;
}
