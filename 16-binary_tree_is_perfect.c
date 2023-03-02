#include "binary_trees.h"
/**
  * binary_tree_is_perfect - unction that checks if a binary tree is perfect.
  * @tree: pointer to the root node of the tree to check
  *
  * Return: 0 or 1
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = binary_tree_height1(tree);
	int size = binary_tree_size1(tree);
	int p = 1;

	for (int i = 0; i <= h; i++)
		p *= 2;
	p -= 1;

	if (p == size)
		return (1);
	else
		return (0);

}
/**
  * binary_tree_height1 - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  *
  * Return: height
  */

int binary_tree_height1(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = binary_tree_height1(tree->left) + 1;

	if (tree->right)
		rh = binary_tree_height1(tree->right) + 1;

	return ((lh > rh) ? lh : rh);
}
/**
  * binary_tree_size1 - measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the size
  *
  * Return: size
  */
int binary_tree_size1(const binary_tree_t *tree)
{
	int count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		count_l = binary_tree_size1(tree->left) + 1;
		count_r = binary_tree_size1(tree->right) + 1;
	}

	return (count_l + count_r - 1);
}

