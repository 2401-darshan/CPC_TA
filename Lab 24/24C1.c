#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *nums, *ans;

    printf("Enter size: ");
    scanf("%d", &n);

    nums = (int*)malloc(n * sizeof(int));
    ans = (int*)malloc(2 * n * sizeof(int));

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }

    printf("Result array:\n");

    for(i = 0; i < 2*n; i++)
    {
        printf("%d ", ans[i]);
    }

    free(nums);
    free(ans);

    return 0;
}