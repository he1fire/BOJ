import sys
input_data = sys.stdin.read().split()
N = int(input_data[0])
M = int(input_data[1])
print(N // M)
print(N % M)