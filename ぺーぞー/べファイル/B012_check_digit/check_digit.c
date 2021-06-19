#include <stdio.h>
#include <stdlib.h>

int calc_even(int num)
{
        int even = 0;

        even = num * 2;

        if(even >= 10)
        {
                even = (even / 10) + (even % 10);
        }

        return even;
}

int sum_even(char *num_str)
{
        int sum = 0;

        for(int i = 0; i < 8; i++)
        {
                sum = sum + calc_even( num_str[i * 2] - '0' );
        }

        return sum;
}

int sum_odd_xfirst(char *num_str)
{
        int sum = 0;

        for(int i = 0; i < 7; i++)
        {
                sum = sum + ( num_str[i * 2 + 1] - '0' );
        }

        return sum;
}

int calc_x(char *num_str)
{
        int tmp = 0;
        int mod = 0;
        int result = 0;

        tmp = sum_odd_xfirst(num_str) + sum_even(num_str);
        mod = tmp % 10;

        if(mod != 0)
        {
                result = 10 - mod;
        }

        return result;
}

int main(void)
{
        int input_num = 0;
        char input_num_str[16] = { 0 };
        char input_credits[100][32] = { {0} };

        // input num
        fgets(input_num_str, sizeof(input_num_str), stdin);
        input_num = atoi(input_num_str);

        // input credits
        for(int i = 0; i < input_num; i++)
        {
                fgets(input_credits[i], sizeof(input_credits[i]), stdin);
        }

        // output
        for(int i = 0; i < input_num; i++)
        {
                printf("%d\n", calc_x(input_credits[i]));
        }

        return 0;
}
