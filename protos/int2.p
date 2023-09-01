set terminal postscript solid color 22
set output "int2.eps"
set xlabel "A"
set ylabel "T"
plot "int2a.txt" u 1:2 title "trap method","int2b.txt" u 1:2 title "simpsons method","int2c.txt" u 1:2 title "approximated", "int2d.txt" u 1:2 title "percentage difference" 
set terminal x11
