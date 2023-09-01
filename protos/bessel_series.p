set terminal postscript solid color 22
set output "bessel_series.eps"
set xlabel 'x'
set ylabel 'j(x)'
plot "bessel_series1.txt" u 1:2 with linespoints title "j0", "bessel_series2.txt" u 1:2 with linespoints title "j1", "bessel_series3.txt" u 1:2 with linespoints title "j2"
set terminal x11
