input_dir="test_deliverable/test_cases"

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
	#hav to make a name for out i think as they cant be the same every time


	test_c_extension=$input_dir$"/"$test_no_extension$".c"
	test_o_extension=$input_dir$"/"$test_no_extension$".o"
	test_s_extension=$input_dir$"/"$test_no_extension$".s"
	driver_c_extension=$input_dir$"/"$driver_no_extension$".c"

	echo $test_c_extension
	echo $test_o_extension
	echo $test_s_extension
	echo $driver_c_extension
done