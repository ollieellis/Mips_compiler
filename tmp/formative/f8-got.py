x=0


def f():
	global x
	pass
	x=x+1

	return x




def main():
	global x
	pass

	return f()+f()





# Boilerplate
if __name__ == "__main__":
    import sys
    ret=main()
    sys.exit(ret)