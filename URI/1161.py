#URI 1161

def fat(num):
	ans = 1
	for i in range(1, num+1):
		ans *= i
	return ans

def main():
	# map(func, (p0, p1, ..., pn) ) executa func para cada p.
	m,n = map(int, input().split())

	print(fat(m)+fat(n))

if __name__ == "__main__":
	while True:
		try:
			main()
		except:
			break