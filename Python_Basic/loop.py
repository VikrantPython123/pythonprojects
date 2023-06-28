def dev(n,m):
    for i in range(0,n+1):
      d = 1;
      for x in range(0,m+1):
          print("-",end="")
      for x in range(0,d):
          print(".|.",end="")
          d = d+2;
dev(5,7)
