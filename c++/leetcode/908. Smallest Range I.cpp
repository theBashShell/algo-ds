class Solution
{
public:
  int smallestRangeI(vector<int> &A, int K)
  {
    /*
        *   if A's size is 1 return 0
        *   find max and min values in A
        *   minimize max value (ie. subtract K)
        *   maximimze min value (ie. add K)
        *   find difference b/n max and min
        *   if difference is negative, return 0 or diff. otherwise
        */

    int diff = 0;
    int max_min[2];

    if (A.size() == 1)
      return diff;

    // get max
    max_min[0] = *max_element(A.begin(), A.end());

    // get min
    max_min[1] = *min_element(A.begin(), A.end());

    // minimize max
    max_min[0] -= K;

    // miximize min
    max_min[1] += K;

    // find diff b/n max & min
    diff = max_min[0] - max_min[1];

    return diff < 0 ? 0 : diff;
  }
};