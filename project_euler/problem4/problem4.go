package main

import "fmt"

func is_palindrome(a int, b int) bool {
    num := a * b
    n := num
    rev := 0
    for num > 0 {
        dig := num % 10
        rev = rev * 10 + dig
        num = num / 10
    }
    if n == rev {
        return true
    } else {
        return false
    }
}

func solve(init int, reducer int) int {
    if reducer == 99 {
        return 0
    } else if is_palindrome(init, reducer) {
        return init * reducer
    } else {
        return solve(init, reducer - 1)
    }
}

func main() {
    ans := 0
    for i := 999; i > 99; i-- {
        ret := solve(i, i)
        if ret > ans {
            ans = ret
        }
    }
    fmt.Println(ans)
}
