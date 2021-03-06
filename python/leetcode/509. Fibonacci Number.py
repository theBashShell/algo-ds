class Solution:
    def fib(self, N: int) -> int:
        if N == 0:
            return 0
        if N == 1:
            return 1

        first = 0
        second = 1

        for i in range(2, N + 1):
            third = first + second
            first = second
            second = third

        return second
