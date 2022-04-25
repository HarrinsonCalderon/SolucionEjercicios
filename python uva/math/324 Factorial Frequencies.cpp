while True:
 try:
         n=int(input())
         if n==0:
           break
         m=1
         for i in range(1,n+1):
          m*=i
         cad=str(m)
         a=[0,0,0,0,0,0,0,0,0,0]
         for i in cad:
          a[int(i)]+=1
         sa=str(n)+"! --"
         print(sa)
         sa=""
         it=0
         for i in range(0,5):
            sa+="   ("+str(it)+")   "+str(a[i])
             
            it+=1
         print(sa)
         sa=""
         for i in range(5,10):
            sa+="   ("+str(it)+")   "+str(a[i])
            it+=1
        
         
         print(sa)
 except EOFError:
          break
 
