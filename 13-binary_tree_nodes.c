#include "binary_trees.h"

/**
 * binary_tree_nodes - Cuenta los nodos que tienen al menos un hijo.
 * @tree: Puntero a la raíz del árbol.
 *
 * Return: El número de nodos con al menos un hijo.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left != NULL || tree->right != NULL)
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
