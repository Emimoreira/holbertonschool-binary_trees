#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un árbol binario.
 * @tree: Puntero a la raíz del árbol.
 *
 * Return: La altura del árbol.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
