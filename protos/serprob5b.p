set terminal postscript solid color 22
set output "serprob5b.eps"
set xlabel 'z'
set ylabel 'f(z,2)'
plot "serprob5b.txt" u 1:2 title "f(z,2) vs z"
set terminal x11	
