acc = 600851475143
ret = 71
lb = 71
ub = Math.sqrt(acc).to_i + 1

(lb..ub).each do |i|
  if acc % i == 0
    acc /= i
    ret = i
  end
end

puts ret
