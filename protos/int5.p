set terminal postscript solid color 22
set output "int5.eps"
set xlabel "z"
set ylabel "jn"
plot "int5.txt" u 1:2 title "bessel"
set terminal x11
