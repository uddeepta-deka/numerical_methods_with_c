set terminal postscript solid color 22
set output "int3.eps"
set xlabel "x"
set ylabel "y"
plot "int3.txt" u 1:2,"int3.txt" u 1:3
set terminal x11
