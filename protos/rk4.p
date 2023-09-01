set terminal postscript solid color 22
set output "rk4.eps"
set xlabel 't'
set ylabel 'y'
plot "rk4.txt" u 1:2, "rk4.txt" u 1:3
set terminal x11
