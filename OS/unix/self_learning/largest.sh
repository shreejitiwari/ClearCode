max=$1

for num in $*
do
    if [ $max -lt $num ]
    then
        max=$num
    fi
done

echo "Maximum of all is $max"