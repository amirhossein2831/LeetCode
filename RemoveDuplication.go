package main

func removeDuplicates(nums []int) int {
	var hold []int
	hold = append(hold, nums[0])
	for i := 1; i < len(nums); i++ {
		if nums[i] != nums[i-1] {
			hold = append(hold, nums[i])
		}
	}
	for i := range hold {
		nums[i] = hold[i]
	}
	return len(hold)
}

func removeDuplicatesII(nums []int) int {
	var hold []int
	hold = append(hold, nums[0])
	k := 0
	for i := 1; i < len(nums); i++ {
		if nums[i] == nums[i-1] {
			k++
		} else {
			k = 0
		}
		if k >= 2 {
			continue
		} else {
			hold = append(hold, nums[i])
		}
	}
	for i := range hold {
		nums[i] = hold[i]
	}

	return len(hold)
}
