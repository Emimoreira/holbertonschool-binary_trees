#include "binary_trees.h"

/**
 * binary_tree_depth - Mide la profundidad de un nodo en un árbol binario
 * @tree: Puntero al nodo para medir la profundidad.
 *
 * Return: La profundidad del nodo.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	return (0);

	while (tree->parent != NULL)
	{
	depth++;
	tree = tree->parent;
	}

	return (depth);
}
