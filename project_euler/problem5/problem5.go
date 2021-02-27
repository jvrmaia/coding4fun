package main

import "fmt"

func gcd(a int, b int) int {
    for b != 0 {
        tmp := b
        b = a % b
        a = tmp
    }
    return a
}

func lcm(a int, b int) int {
    return (a * b)/gcd(a, b)
}

func main() {
    answer := 1
    for i := 1; i < 21; i++ {
        answer = lcm(answer, i)
    }

    fmt.Println(answer)
}
