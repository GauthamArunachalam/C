n = int(input())
count = 0
for i in range(1,n):
    if(n%i==0):
        continue
    for j in range(i//2,1,-1):
        if(n%j==0 and i%j==0):
            break
    else:
        count+=1
print(count+1)
