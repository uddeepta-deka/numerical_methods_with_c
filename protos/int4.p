set terminal postscript solid color 22
set output "int4.eps"
set xlabel "x"
set ylabel "F(x)"
plot "int4.txt" u 1:2 with lp
set terminal x11

