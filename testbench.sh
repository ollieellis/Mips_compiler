no_tests=0
no_passed=0

input_dir="test_deliverable/test_cases"
mips_gcc="mips-linux-gnu-gcc -mfp32 -std=c90 -ansi -pedantic"

#clean dir

for i in ${input_dir}/*.c ; do

	#discregard drivers
	#https://www.cyberciti.biz/faq/unix-linux-bsd-appleosx-continue-in-bash-loop/
	[[ $i == *_driver.c ]] && continue

	#get c_in //c_in.c = i
	#https://www.thegeekstuff.com/2010/07/bash-string-manipulation/
	#base=$(echo $i | sed -E -e "s|${input_dir}/([^.]+)[.]c|\1|g"); //from c formative
	test_no_extension=$(echo $i | sed -E -e "s|${input_dir}/([^.]+)[.]c|\1|g");
	name_4_result=$test_no_extension

	#get driver
	#https://stackoverflow.com/questions/4181703/how-to-concatenate-string-variables-in-bash
	driver_string=$"_driver" #instead of finding ill append the test_no_extension w "_driver" done below
	driver_no_extension=$test_no_extension$driver_string

	test_c_extension=$input_dir$"/"$test_no_extension$".c"
	test_o_extension=$input_dir$"/"$test_no_extension$".o"
	test_s_extension=$input_dir$"/"$test_no_extension$".s"
	driver_c_extension=$input_dir$"/"$driver_no_extension$".c"

	test_no_extension=$input_dir$"/"$test_no_extension$"bin" #be careful with this this is a redifinition

	#bin/c_compiler -S test_c_extension -o test_s_extension
	mips-linux-gnu-gcc -S $(echo $test_c_extension) -o $(echo $test_s_extension) #testing tests using gcc
	#mips-linux-gnu-gcc -S $(echo $test_c_extension) -o $"out.s" #testing tests using gcc

	$mips_gcc -o $(echo $test_o_extension) -c $(echo $test_s_extension)
	#echo $mips_gcc -o $(echo $test_o_extension) -c $"out.s"

	$mips_gcc -static -o $(echo $test_no_extension) $(echo $test_o_extension) $(echo $driver_c_extension)

	qemu-mips $(echo $test_no_extension)

	exit_code=$?
	#echo $exit_code #testing

	#-ansi -pedantic :
	#-ansi: tells the compiler to implement the ANSI language option. This turns off certain "features" of GCC which are incompatible with the ANSI standard.
	#-pedantic: used in conjunction with -ansi, this tells the compiler to be adhere strictly to the ANSI standard, rejecting any code which is not compliant.

	if [[ $exit_code == 0 ]]; then
		((no_passed = no_passed + 1))
		test_result="pass"
	else
		test_result="fail"
	fi
	((no_tests = no_tests + 1))
	echo $name_4_result$" "$test_result

	#print file name n pass/fail
	#clean directory ??????
done
#print no_passed out of no_tests
