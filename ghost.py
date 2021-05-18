x=[]
summax=0
max_tic=0
people=int(input())
limit=int(input())
for i in range(people):
 ticket=int(input())
 x.append(ticket)

for a in range(limit):
    x.sort()
    max_tic=max(x)
    summax= summax+max_tic
    x.pop()
    max_tic=max_tic-1
    x.insert(-1,max_tic)


print(summax)
