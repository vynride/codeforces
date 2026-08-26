package main

import "fmt"

func main() {
    var n, m, k int
    fmt.Scan(&n, &m, &k)

    arr := make([]int, n)
    ate := make([]bool, n)

    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])   
    }

    var sum int
    for i := 0; i < n; i++ {
        sum += arr[i]

        if i - m >= 0 && ate[i - m] == true {
            sum -= arr[i - m]
        }

        if sum <= k {
            ate[i] = true
            fmt.Println("Yes")
        } else {
            fmt.Println("No")
            sum -= arr[i]
        }
    }
}
