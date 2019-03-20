#!/bin/bash

if which dos2unix ; then
    DOS2UNIX="dos2unix"
elif which fromdos ; then
    DOS2UNIX="fromdos"
else
    case "$(uname -s)" in
    Darwin|Linux)
        DOS2UNIX="cat"
    ;;

    *)
        DOS2UNIX="sed -e s/\x0D//g -"
    ;;
    es
PASS=0
TESTED=0

for i in test_deliverable/test_cases/*.c; do
    echo "Input file : ${i}"

OUTPUTFILE=$(outputfile $i .txt);
cat $i | ${DOS2UNIX} | ./testbench.sh  > test_deliverable/test_cases/$OUTPUTFILE.stdout.s  2> test_deliverable/test_cases/$OUTPUTFILE.stderr.py

diff <(cat test_deliverable/test_cases/$OUTPUTFILE.stdout.txt | ${DOS2UNIX}) <(cat test_deliverable/test_cases/$OUTPUTFILE.stdout.txt) > test_deliverable/test_cases/$OUTPUTFILE.diff.tx
if [[ "$?" -ne "0" ]]; then
    echo -e "\nERROR"
else
    PASS=$(( ${PASSED}+1 ));
fi
TESTED=$(( ${CHECKED}+1 ));
done
