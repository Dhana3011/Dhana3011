clear
n=0
echo "enter a:"
read a
echo "enter b:"
read b
echo "enter the option"
echo "Add"
echo "sub"
echo "divide"
echo "multiply"
read n
case "$n" in
"1") echo "`expr $a + $b`";;
"2") echo "`expr $a - $b`";;
"3") echo "`expr $a / $b`";;
"4") echo "`expr $a \* $b`";;
esac