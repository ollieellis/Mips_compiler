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

	#get driver
	#https://stackoverflow.com/questions/4181703/how-to-concatenate-string-variables-in-bash
	driver_string=$"_driver" #instead of finding ill append the test_no_extension w "_driver" done below
	driver_no_extension=$test_no_extension$driver_string

	test_c_extension=$input_dir$"/"$test_no_extension$".c"
	test_o_extension=$input_dir$"/"$test_no_extension$".o"
	test_s_extension=$input_dir$"/"$test_no_extension$".s"
	driver_c_extension=$input_dir$"/"$driver_no_extension$".c"

	test_binary=$input_dir$"/"$test_no_extension #be careful with this this is a redifinition

	#hav to make a name for out i think as they cant be the same every time


#########################################################################################################

	#Compile ${NAME}.c using the compiler-under-test into MIPS assembly.
	../../bin/c_compiler -S c_in.c -o out.s #c_in.c is no i in the loop

	#testing using gcc the following line will ot be used in bash scipr and is the above line for gcc
	mips-linux-gnu-gcc -S test_deliverable/test_cases/IF_T.c -o out.s

	mips-linux-gnu-gcc -S $(echo $test_c_extension) -o  $(echo $test_s_extension) #testing tests using gcc

#########################################################################################################

	#Compile ${NAME}_driver.c using GCC into a MIPS object file.<--- statement is correct still part of step 1 i think
	mips-linux-gnu-gcc -mfp32 -std=c90 -ansi -pedantic -o c_in.o -c out.s

	#below line i used to copy n paste to test above line therefore ignore
	mips-linux-gnu-gcc -mfp32 -std=c90 -ansi -pedantic -o test_deliverable/test_cases/IF_T.o -c out.s

	echo $mips_gcc -o $(echo $test_o_extension) -c $( echo $test_s_extension)

##########################################################################################################

	#Link the generated assembly and the driver object into a MIPS executable.
	mips-linux-gnu-gcc -mfp32 -std=c90 -ansi -pedantic -static -o c_in c_in.o driver.c

	#below line i used to copy n paste to test above line therefore ignore
	mips-linux-gnu-gcc -mfp32 -std=c90 -ansi -pedantic -static -o test_deliverable/test_cases/IF_T test_deliverable/test_cases/IF_T.o test_deliverable/test_cases/IF_T_driver.c

	echo $mips_gcc -static -o $(echo $test_binary) $(echo $test_o_extension) $(echo $driver_c_extension)
###########################################################################################################

	#Run the executable under QEMU.
	qemu-mips $binary_out

	#below line i used to copy n paste to test above line therefore ignore
	qemu-mips test_deliverable/test_cases/IF_T

	qemu-mips $(echo $test_no_extension)

############################################################################################################
	exit_code=$? #stored so doesnt change

	#below lines i used to copy n paste to test above line therefore ignore
	exit_code=$?
	echo $exit_code

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

	#print file name n pass/fail
	#clean directory ??????
done
#print no_passed out of no_tests
