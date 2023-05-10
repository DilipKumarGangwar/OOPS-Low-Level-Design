# Intuition
As problem describes about the family and hierarchy, so hierarchical data structure can be used. Tree data structure is good to use.
Tree : can be used to store the parent and child relationships.
The order of inheritance is basically the DFS or preorder traversal of the Tree ( just we have to ignore the Dead Person/nodes)


# Approach
3 Approaches are shown in below codes
Approach 1: 

Uses Tree data structure to store the parent and child relationships.
Problem: In birth(): Searching the parent to whom we have to add the child, takes lot of time as searching always starts from root node( king)
In death(): Again searching the node to mark dead takes lot of time as searching always starts from root node( king)

So it give Time Limit Exceeded

Note: dead status is put in each node.( isAlive)

Approach 2:
To sae search time, we use unordered map also along with Tree.

In map we store the personName as key and the Node address ( as value ) in which personName is stored

So when we need to search for a person, we can directly access that person in O(1) time

This solution works FINE.

Note: dead status is put in each node.( isAlive)

Approach 3:
Here we avoided the use of Tree and used a map for showing the parent child relationship.

For dead person status,we took a set . It stores name of dead persons.
We can use another map also for keeping dead person status. 