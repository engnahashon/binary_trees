#include "binary_trees.h"
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  *
  * Return: height
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;

	if (tree->right)
		rh = binary_tree_height(tree->right) + 1;

	return ((lh > rh) ? lh : rh);
}
