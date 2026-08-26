package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)
	
	chars := []byte(s)

	for i := 0; i < len(s); i++ {
		if s[i] != 'A' {
			chars[i] = '.'
		}
	}

	s = string(chars)
	fmt.Println(s)
}
