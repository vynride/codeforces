package main

import "fmt"

func main() {
    m := make(map[int]int)

    var n int
    fmt.Scan(&n)

    a := make([]int, n)
    for i := range n {
        fmt.Scan(&a[i])
        m[a[i]]++
    }

    var sum int
    for k, v := range m {
        if v % 2 == 1 {
            sum += k
        }

        // fmt.Println("sum: ", sum)
    }

    fmt.Println(sum)
}
