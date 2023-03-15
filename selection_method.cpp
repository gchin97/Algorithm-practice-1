#include <stdio.h>

int main(void)
{
    // i,j: 배열의 원소를 반복적으로 탐색
    // temp: 특정한 두숫자를 바꾸기 위해 사용
    int i, j, min, max, temp;
    //
    int array[10] = { 1,
                      10,
                      5,
                      8,
                      9,
                      2,
                      6,
                      7,
                      4 } for (i = 0; i < 10; i++)
    {
        // 모든 원소들보다 더 큰 숫자를 임의로 넣어줌 (min 은 항상 최솟값을 사용해야되기 때문임)
        min = 9999;
        for (j = i; j < 10; j++)
        {
            // 현재 탐색하는 원소가 현재 최솟값보다 작다면
            if (min > array[j])
            {
                min = array[j];
                // 해당 위치값
                index = j;
            }
        }
        // 찾은 최솟값을 제일 앞으로 넣어줘
        temp = array[i];
        array[i] = array[index];
        // 다시 이 최솟값이 있던 자리에 temp에 있던 자리에 넣어줌
        array[index] = temp;
    }
    // 정렬이 완료된 이후에는 정렬 출력
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}