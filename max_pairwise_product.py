# python3

"""
def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first + 1, n):
            max_product = max(max_product,
                numbers[first] * numbers[second])

    return max_product


if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product(input_numbers))
"""

# cook your dish here
n = int(input())
arr=[int(x) for x in input().split()]


if arr[0]>arr[1] :
    m1=0
    m2=1
else:
    m1=1
    m2=0

for i in range(1,n):
    if (arr[i]>arr[m1]):
        m2 = m1
        m1 = i
    if (i!=m1 and arr[i]>arr[m2]):
        m2=i
print(arr[m1]*arr[m2])
