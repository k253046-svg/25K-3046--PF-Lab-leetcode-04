#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) return 1;
    int dp[n + 1];
    int i;
    dp[0] = 1;
    dp[1] = 1;
    for (i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", climbStairs(n));
    return 0;
}

