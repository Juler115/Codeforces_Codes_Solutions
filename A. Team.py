# Problem: A. Team
# Contest: Codeforces - Codeforces Round #143 (Div. 2)
# URL: https:#codeforces.com/problemset/problem/231/A
# Memory Limit: 256 MB
# Time Limit: 2000 ms
# 
# Powered by CP Editor (https:#cpeditor.org)

n=int(input())
sol=0
i=0
while i<n:
	s=list(map(int, raw_input().split()))
	a=int(s[0])
	b=int(s[1])
	c=int(s[2])
	if a+b+c>=2:
		sol+=1
	i+=1

print(sol)