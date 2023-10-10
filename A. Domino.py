# Problem: A. Domino piling
# Contest: Codeforces - Codeforces Beta Round #47
# URL: https:#codeforces.com/problemset/problem/50/A
# Memory Limit: 256 MB
# Time Limit: 2000 ms
# 
# Powered by CP Editor (https:#cpeditor.org)


s=list(map(int, raw_input().split()))
n=s[0]
m=s[1]

tablero= [[0 for x in range(n)] for y in range(m)] 
resul=0

for i in range(n):
	for j in range(m-1):
		if int(tablero[i][j])==0 and int(tablero[i][j+1])==0:
			resul+=1
			tablero[i][j]=1
			tablero[i][j+1]=1			
if tablero[0][m-1]==0:
	resul+=n/2
	
print(resul)	