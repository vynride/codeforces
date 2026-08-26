package main

import "fmt"

func main() {
	var n int
    fmt.Scan(&n)

    parts := make([]int, n)
    prefParts := make([]int, n)
    var sum int = 0

	for i := range parts {
		fmt.Scan(&parts[i])
	
        if i != 0 {
            prefParts[i] = prefParts[i - 1] + parts[i]
        } else {
            prefParts[i] = parts[i]
        }

        sum += parts[i]
    }
    
    var minDiff int = 1 << 31
    var sumi int = 0
    for i := 0; i < n-1; i++ {
        sumi += parts[i]
        diff := max(sum - 2*sumi, 2*sumi - sum)
        minDiff = min(minDiff, diff)
    }

    fmt.Println(minDiff)
}
