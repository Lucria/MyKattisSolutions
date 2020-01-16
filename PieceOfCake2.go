package main

import (
	"fmt"
)

func MaxOf(vars ...int) int {
	max := vars[0]

	for _, i := range vars {
		if max < i {
			max = i
		}
	}
	return max
}

func main() {
	var n, length, distance int
	fmt.Scanf("%d %d %d", &n, &length, &distance)
	var thickness = 4
	var piece1Volume = length * distance
	var piece2Volume = length * (n - distance)
	var piece3Volume = (n - length) * distance
	var piece4Volume = (n - length) * (n - distance)
	var maxVolume = MaxOf(piece1Volume, piece2Volume, piece3Volume, piece4Volume)

	fmt.Println(maxVolume * thickness)
}
