for t in range(int(input())):
	l = int(input())
	s = input()
	if int(s[0]) < int(s[1:]):
		print("YES")
		print(2)
		print(s[0], s[1:])
	else:
		print("NO")