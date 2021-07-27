#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
double avg(T arr, int n)
{
    int index = 0; double avg_r = 0;
    while (index < n)
        avg_r += (double)arr[index++] / n;

    return avg_r;
}

int main()
{
    int M1[10] = {1,2,3,4,5,6,7,8,9,10 };
    double M2[10] = {1.3, 1.6, 1.9, 3.8, 6,9, 7.1, 88.22, 33.2, 24.5 };
    long M3[10] = { 100000000, 20000000, 50000000, 9000000000, 88888888888, 999999999999, 5555555555,77777777777,444444444444,222222222222 };
    char M4[10] = { 'a', 'b', 'c', 'd', 'g', 'i', 're', 'hg', 'hg', 'dd' };

    printf("avg = %d\n", avg(M1, 10)); // параметр шаблона определяется параметром функции
    printf("avg = %lf\n", avg(M2, 10));
    printf("avg = %ld\n", avg(M3, 10));
    printf("avg = %c\n", avg(M4, 10));
}