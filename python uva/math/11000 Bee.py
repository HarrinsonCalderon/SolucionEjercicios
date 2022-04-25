
m=[0,1]
t=[1,2]
for i in range(2,10000):
 m.append((m[i-1]+m[i-2])+1)
 t.append((t[i-1]+t[i-2])+1)

while True:
 try:
          a=int(input())
          if a==-1:
            break
          print(m[a],t[a])

 except EOFError:
          break
