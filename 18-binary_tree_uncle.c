#include "binary_trees.h"

/**
 * binary_tree_uncle - Encuentra el tío de un nodo
 * @node: Puntero al nodo cuyo tío se busca
 *
 * Return: Puntero al nodo tío, o NULL si no tiene tío
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);

	return (node->parent->parent->left);
}
