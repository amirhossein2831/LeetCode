package main

func merge(nums1 []int, m int, nums2 []int, n int) {
	hold := make([]int, m)
	for index := 0; index < m; index++ {
		hold[index] = nums1[index]
	}

	i := 0
	j := 0
	k := 0
	for i < m && j < n {
		if hold[i] < nums2[j] {
			nums1[k] = hold[i]
			i++
			k++
		} else {
			nums1[k] = nums2[j]
			j++
			k++
		}
	}
	for i < m {
		nums1[k] = hold[i]
		i++
		k++
	}
	for j < n {
		nums1[k] = nums2[j]
		j++
		k++
	}
}
