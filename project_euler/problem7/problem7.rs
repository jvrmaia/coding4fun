fn main() {
	let mut primes = ~[2, 3, 5, 7, 11, 13];
	let mut cur = 15;
	let mut insert;
	while primes.len() < 10001 {
		insert = true;
		for i in primes.iter() {
			if cur % *i == 0 {
				insert = false;
				break;
			}
		}
		if insert {
			primes.push(cur);
		}
		cur += 2;
	}
	println!("{:i}", primes[primes.len() - 1])
}
