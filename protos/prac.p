set terminal postscript solid color 22
set output "prac.eps"
set xlabel 'x'
set ylabel 's'
plot "prac.txt" u 1:2
set terminal x11
