def maximumSpend(N, X, A):
    memo = {}

    def maxSpendRec(balance):
        if balance in memo:
            return memo[balance]
        if balance < 0:
            return float('-inf')  # Invalid state
        if balance == 0:
            return 0  # Base case

        max_spent = 0
        for price in A:
            if balance >= price:
                spent = maxSpendRec(balance - price)
                if spent != float('-inf'):
                    max_spent = max(max_spent, spent + price)
        
        memo[balance] = max_spent
        return max_spent

    # Find the maximum amount that can be spent
    max_spendable = maxSpendRec(X)

    # Calculate the minimum money left
    result = X - max_spendable
    return result

# INPUT
N, X = map(int, input().split())
A = list(map(int, input().split()))

# OUTPUT
print(maximumSpend(N, X, A))