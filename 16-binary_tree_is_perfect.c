#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree && tree->parent)
    {
        tree = tree->parent;
        depth++;
    }

    return depth;
}

/**
 * is_perfect_recursive - Recursively checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * @depth: The depth of the current node
 * @level: The level of the first encountered leaf node
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (tree == NULL)
        return 1;

    if (tree->left == NULL && tree->right == NULL)
    {
        if (level == 0)
            level = depth;

        return (depth == level);
    }

    if (tree->left == NULL || tree->right == NULL)
        return 0;
    return is_perfect_recursive(tree->left, depth + 1, level) &&
           is_perfect_recursive(tree->right, depth + 1, level);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, otherwise 0. Returns 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return is_perfect_recursive(tree, 0, 0);
}
