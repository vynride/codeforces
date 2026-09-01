package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)

    a := make([]int, n)

    for i := range n {
        fmt.Scan(&a[i])
    }

    var sum int
    for j := n/2; j < n; j++ {
        sum += a[j]
    }

    fmt.Println(sum)
}
