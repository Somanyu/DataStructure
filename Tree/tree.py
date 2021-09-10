class Node:
  def __init__(self, item):
    self.right = None
    self.left = None
    self.val = item

def inorderTraversal(root):
    if root:
        inorderTraversal(root.left)
        print(str(root.val) + " -> ", end="")
        inorderTraversal(root.right)

def preorderTraversal(root):
    if root:
        print(str(root.val) + " -> ", end="")
        preorderTraversal(root.left)
        preorderTraversal(root.right)

def postorderTraversal(root):
    if root:
        postorderTraversal(root.left)
        postorderTraversal(root.right)
        print(str(root.val) + " -> ", end="")

root = Node(1)
root.left = Node(12)
root.right = Node(9)

root.left.left = Node(5)
root.left.right = Node(6)

root.right.left = Node(23)
root.right.right = Node(42)

root.right.left.left = Node(56)
root.right.left.right = Node(99)

print("Inorder Traversal ")
inorderTraversal(root)
print("\nPreorder Traversal ")
preorderTraversal(root)
print("\nPostorder Traversal ")
postorderTraversal(root)