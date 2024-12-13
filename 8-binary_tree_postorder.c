#include "binary_trees.h"

/**
 * binary_tree_postorder - Recorre el árbol en postorde y aplica una funció.
 * @tree: Puntero a la raíz del árbol a recorrer.
 * @func: Puntero a la función que se debe aplicar a cada nodo.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
