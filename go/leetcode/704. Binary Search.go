func search(nums []int, target int) int {
    start := 0
    end := len(nums) - 1
    
    for start <= end {
        mid := start + int(((end - start) / 2))
        
        if nums[mid] == target {return mid}
        if nums[mid] < target {
            start = mid + 1
        } else {
            end = mid - 1
        }
    }
    
    return -1
} 