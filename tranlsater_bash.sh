input_dir="doc/translater_tests/variables"

make clean
make all

for i in ${input_dir}/*.c ; do
	test_no_extension=$(echo $i | sed -E -e "s|${input_dir}/([^.]+)[.]c|\1|g");
	py=$input_dir$"/"$test_no_extension$".py"
	bin/c_compiler --translate $(echo $i) $(echo "-o") $(echo $py)
	C_GOT=$?
	echo "############################### PYTHOn #####################################"
	python3 $(echo $py)
	P_GOT=$?

	if [[ $C_GOT -ne $C_GOT ]] ; then
		echo "$test_no_extension, failed"
	else
        echo "$test_no_extension, Pass"
    fi
done