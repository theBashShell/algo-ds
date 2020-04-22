/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {string[]}
 */
var binaryTreePaths = function (root) {
  const result = [];
  if (!root) return result;

  function path(root, str) {
    if (!root.left && !root.right) result.push(str + root.val);
    if (root.left) path(root.left, str + root.val + "->");
    if (root.right) path(root.right, str + root.val + "->");
  }
  path(root, "");
  return result;
};
