
while True:
 try:
          cad=input()
          cad=cad.split()
          a=int(cad[0])
          b=int(cad[1])
          print(abs(b-a))
 except EOFError:
  break
