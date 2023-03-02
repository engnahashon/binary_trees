#include "binary_trees.h"
/**
  * binary_tree_size - measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the size
  *
  * Return: size
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		count_l = binary_tree_size(tree->left) + 1;
		count_r = binary_tree_size(tree->right) + 1;
	}

	return (count_l + count_r - 1);
}

