#include <stdio.h>
int main() {
  int nums[] = {1, 3, 23, 4, 5, 6};
  int min = 0;
  int numsSize = sizeof(nums) / sizeof(nums[0]);
  int mid = (min + numsSize) / 2;
  int target = 5;
  while (min <= numsSize) {
    mid = (numsSize + min) / 2;
    if (target < nums[mid]) {
      numsSize = mid - 1;
    }

    else if (target > nums[mid]) {
      min = mid + 1;
    }

    else {
      break;
    }
  };
  printf("%d", mid);
  return 0;
}
private
void ccn() {
  string wee = "ccn";:w
}
