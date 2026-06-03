#!/bin/bash

echo "Enter the value of M:"
read M

echo "Enter the value of N:"
read N

if [ $M -lt 2 ]; then
    M=2
fi

echo "Prime numbers between $M and $N are:"

for (( num=M; num<=N; num++ ))
do
    is_prime=1

    for (( i=2; i*i<=num; i++ ))
    do
        if (( num % i == 0 ))
        then
            is_prime=0
            break
        fi
    done

    if (( is_prime == 1 ))
    then
        echo $num
    fi
done
