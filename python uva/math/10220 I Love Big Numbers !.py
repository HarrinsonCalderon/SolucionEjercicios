def m(n):
 cad=str(n)
 acu=0
 for i in cad:
  acu+=int(i)
 return acu

v=[1]
f=1
for i in range(1,1002):
 f*=i
  
 v.append(m(f))

while True:
 try:
  nu=int(input())
  print(v[nu])

 except EOFError:
   break

 
