import sys
import heapq
input = sys.stdin.readline
INF = int(1e10)

V, E = map(int, input().split())
G = [[] for _ in range(V+1)]
for i in range(E):
  A, B, C = map(int, input().split())
  G[A].append((B, C))
  G[B].append((A, C))
V1, V2 = map(int, input().split())

def DIJKSTRA(Q):
  VISIT = [False]*(V+1)
  D = [INF]*(V+1)
  while Q:
    B, A = heapq.heappop(Q)
    if VISIT[A]: continue
    VISIT[A]=True
    
    if D[A]>=B: D[A]=B
    else: continue
      
    for i in G[A]:
      N, C = i
      if VISIT[N]: continue
      TEMP = D[A]+C
      if TEMP<D[N]:
        D[N]=TEMP
        heapq.heappush(Q, (TEMP, N))
  return D
        
D1 = DIJKSTRA([(0,V1)])
D2 = DIJKSTRA([(0,V2)])

ANS = min(D1[1]+D1[V2]+D2[V], D2[1]+D1[V2]+D1[V])
if ANS>=INF: print(-1)
else: print(ANS)