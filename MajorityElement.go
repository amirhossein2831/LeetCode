package main

func majorityElement(nums []int) int {
	hold := make(map[int]int)

	for _, v := range nums {
		hold[v]++
	}
	for k, v := range hold {
		if v >= len(nums)/2+1 {
			return k
		}
	}

	return -1
}

func majorityElementII(nums []int) int {
	count := 0
	var ans int
	for _, i := range nums {
		if count == 0 {
			ans = i
		}
		if ans == i {
			count++
		} else {
			count--
		}
	}
	return ans
}
