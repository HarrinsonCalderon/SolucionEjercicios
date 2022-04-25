q=int(input())
while q>0:
         n=input()
         n=int(n)
         cad=input()
         cad=cad.split()
         can=int(cad[0])
         ban=True
         for i in range(1,can+1):
          if(n%int(cad[i])!=0):
           ban=False
           break

         if ban:
          print(n,'-','Wonderful.')
         else:
          print(n,'-','Simple.')
         q-=1
                  
 
