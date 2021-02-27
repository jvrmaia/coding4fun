package main

import "fmt"

func main() {
    sum := 0
    a := 1
    b := 2
    for b <= 4000000 {
        if b % 2 == 0 {
            sum += b
        }
        tmp := a + b
        a = b
        b = tmp
    }
    fmt.Println(sum)
}
