#include <stdio.h>
int main()
{
    long long _num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &_num);
  do
    {
        count++;
        _num /= 10;
    } while(_num != 0);

    printf("Total digits: %d", count);

    return 0;
}

