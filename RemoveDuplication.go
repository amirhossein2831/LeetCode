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
