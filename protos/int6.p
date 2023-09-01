set terminal postscript solid color 22
set output "int6.eps"
set xlabel "z"
set ylabel "jn"
plot "int6.txt" u 1:2 title "spherical bessel"
set terminal x11
