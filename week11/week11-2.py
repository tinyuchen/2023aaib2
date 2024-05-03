BOUND=300000
table=[True]*BOUND
ans=0
for i in range(2,BOUND):
  if table[i]==True:
    #print(i,end=" ")
    ans+=1
    for j in range(i*i,BOUND,i):
      table[j]=False
print("300K的質數有：",ans,"個")