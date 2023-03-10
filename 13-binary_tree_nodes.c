#include "binary_trees.h"
/**
  * binary_tree_nodes -  counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the number of leaves
  *
  * Return: no of nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
