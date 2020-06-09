while (1):
  h, w = map(int, input().split())
  if h == 0 and w == 0:
    break
  
  r = []
  for i in range(h):
    x = list(input())
    r.append(x)
  s = list(input())

  nowp = 0
  nowq = 0
  ans = 0
  flag = False

  # print(r[0].index('J'))

  for i in range(len(s)):
    for j in range(h):
      for k in range(w):
        if s[i] != r[j][k]:
          continue
        else:
          p = j
          q = k
          flag = True
          break
      if flag == True:
        flag = False
        break
    ans += (abs(nowp - p) + abs(nowq - q) + 1)
    nowp = p
    nowq = q
    # print(ans, p, q)

  print(ans)
  # print(r)
  # print(s)