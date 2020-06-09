while (1):
  n, m = map(int, input().split())
  if (n == 0 and m == 0):
    break

  score = []
  sum_score = []
  
  for i in range(n):
    sum_score.append(0)

  for i in range(m):
    score.append(list(map(int, input().split())))
  
  for i in range(m):
    for j in range(n):
      sum_score[j] += score[i][j]

  print(max(sum_score))