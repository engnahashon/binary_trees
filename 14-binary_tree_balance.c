#include "binary_trees.h"
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: pointer to the root node of the tree to measure
  *
  * Return: balance
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (!tree)
		return (0);
	bal = binary_height(tree->left) - binary_height(tree->right);
	return (bal);
}

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  *
  * Return: height
  */

int binary_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = binary_height(tree->left) + 1;

	if (tree->right)
		rh = binary_height(tree->right) + 1;

	return ((lh > rh) ? lh : rh);
}
