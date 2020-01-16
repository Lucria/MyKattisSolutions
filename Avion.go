package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	var n string
	var i int = 0
	var vector []int
	for scanner.Scan() {
		n = scanner.Text()
		i++
		if strings.Contains(n, "FBI") {
			vector = append(vector, i)
		}
	}
	if len(vector) == 0 {
		fmt.Println("HE GOT AWAY!")
	} else {
		fmt.Println(strings.Trim(fmt.Sprint(vector), "[]"))
	}
}
