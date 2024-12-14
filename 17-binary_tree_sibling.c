#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo en un árbol binario
 * @node: Puntero al nodo cuyo hermano se va a encontrar
 *
 * Return: Puntero al nodo hermano, o NULL si no tiene hermano
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return NULL;

	if (node == node->parent->left)
	return node->parent->right;

	return node->parent->left;
}
