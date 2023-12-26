/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> visited;

    // T: O(V + E), where V is the number of nodes, and E is the number of edges.
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;

        if(visited.find(node) != visited.end()){
            return visited[node];
        }

        Node* newNode = new Node(node->val);
        visited[node] = newNode;

        for(Node* neighbor: node->neighbors){
            newNode->neighbors.push_back(cloneGraph(neighbor));
        }
        return newNode;
    }
};