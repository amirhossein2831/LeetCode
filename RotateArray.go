package main

func rotate(nums []int, k int) {
	var hold []int
	size := len(nums)
	if k > size {
		k %= size
	}
	for i := size - k; i < size; i++ {
		hold = append(hold, nums[i])
	}
	for i := 0; i < size-k; i++ {
		hold = append(hold, nums[i])
	}
	copy(nums, hold)
}
