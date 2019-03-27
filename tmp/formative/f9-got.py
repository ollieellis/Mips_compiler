def function(a,b):
	if (a<b):
		pass
		a=a-1
		if (b<a):
			pass
			b=b+3
			if (a==b):
				pass

				return a*b






		return b




	return 13




def main():

	return function(0,0)+function(1,2)+function(4,3)+function(6,7)





# Boilerplate
if __name__ == "__main__":
    import sys
    ret=main()
    sys.exit(ret)