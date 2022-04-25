b=[]
b.append(1)
b.append(2)
for i in range(2,1002,1):
 b.append(b[i-1]+b[i-2])         

while True:
 try:
  n=int(input())
  print(b[n])
 except EOFError:
   break
