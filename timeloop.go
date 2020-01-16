package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	var n int
	for scanner.Scan() {
		n, _ = strconv.Atoi(scanner.Text())
		// fmt.Println(n)
	}

	for i := 1; i <= n; i++ {
		fmt.Printf("%d Abracadabra\n", i)
	}
}
