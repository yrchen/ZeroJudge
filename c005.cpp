/**********************************************************************************/
/*  Problem: c005 "Àô«O¼úª÷" from ACM 10300                                   */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 716KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-20 19:07:58                                         */
/**********************************************************************************/

#include <iostream>

int main()
{
    int cases;
    scanf("%d ", &cases);
    while (cases--)
    {
        int numFarmer;
        scanf("%d ", &numFarmer);
        long long int sum = 0;
        long long int farmSize, numAnimal, efValue;
        for (int i = 0; i < numFarmer; ++i)
        {
            scanf("%lld %lld %lld ", &farmSize, &numAnimal, &efValue);
            sum += farmSize * efValue;
        }
        printf("%lld\n", sum);
    }
    return 0;
}