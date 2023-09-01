set terminal postscript solid color 22
set output "finite_series1.eps"
set xlabel 'n'
set ylabel 'sum'
plot "finite_series1.txt" u 1:2 with linespoints
set terminal x11
