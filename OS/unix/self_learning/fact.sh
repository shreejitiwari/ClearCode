fact=1
n=$1

while [[ $n -gt 1 ]]
do
	fact=`expr $fact \* $n`
	n=`expr $n - 1`
done

echo "Factorial of $1  = $fact"
exit 0
