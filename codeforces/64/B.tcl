set args [gets stdin]
set sum 0
foreach i $args {set sum [expr $sum+$i]}
puts $sum
