#week12-3.py
table = [Ture]*24000
ans = 0
for i in range(2, 24000);
  if table[i]==Ture:
    ans += 1
    for k in range(i*i, 24000, i); table[k] = False
  printf('找到', ans, '個質數')