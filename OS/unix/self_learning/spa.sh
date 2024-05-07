#!/bin/bash

echo "Enter four integer numbers:"
read a b c d
# Calculate the sum
sum=`expr $a + $b + $c + $d`
# Calculate the average
average=$((sum / 4))

# Calculate the product
product=`expr $a \* $b \* $c \* $d`

echo "Sum is $sum"
echo "Average is $average"
echo "Product is $product"
