package leetcode

// O(n^2)
func insert(arr []int, index int, value int) {
	for i := len(arr) - 1; i > index; i-- {
		arr[i] = arr[i-1]
	}
	arr[index] = value
}

func merge_n2(nums1 []int, m int, nums2 []int, n int) {
	temp_sum := m
	for ni := 0; ni < n; ni++ {
		inner_loop_flag := true
		for mi := 0; mi < temp_sum; mi++ {
			if nums2[ni] < nums1[mi] {
				insert(nums1, mi, nums2[ni])
				temp_sum++
				inner_loop_flag = false
				break
			}
		}
		if inner_loop_flag {
			nums1[temp_sum] = nums2[ni]
			temp_sum++
		}
	}
}

// O(m+n)
func merge_m_plus_n(nums1 []int, m int, nums2 []int, n int) {
	index := m + n - 1
	for n > 0 && m > 0 {
		index = m + n - 1
		if nums2[n-1] >= nums1[m-1] {
			nums1[index] = nums2[n-1]
			n--
		} else {
			nums1[index] = nums1[m-1]
			m--
		}
	}

	for m+n > 0 {
		index = m + n - 1
		if m > 0 {
			nums1[index] = nums1[m-1]
			m--
		} else {
			nums1[index] = nums2[n-1]
			n--
		}
	}
}

func merge(nums1 []int, m int, nums2 []int, n int) {
	merge_m_plus_n(nums1, m, nums2, n)
}
