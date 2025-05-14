#include <iostream>
/*
접근
`1` 부터 `n`까지 `m` `배수`의 `합`

1. n = 8
   1~8, 1 2 3 4 5 6 7 8
2. m = 2
   2의 배수, 2 4 6 8 ....
3. 배수의 합
   2
   2 + 4
   (2 + 4) + 6
   ((2 + 4) + 6) + 8 = 20

*/

int main()
{
    int n, m, i, sum = 0;
    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0) // i가 m의 배수라면
        {
            sum = sum + i; // 누적합
        }

    }//end of for

    std::cout << sum;

    return 0;
}