//Approach 1
//Code works, but Time Limit Exceeded
// Reason: Searching takes time.as we always start searching from root Node.

/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
   string name;
   vector<Node*> children;
   bool isAlive;
  public:
     Node(string kingName)
     {
         //initialise data members
         name = kingName;
         isAlive = true;
     }      

     void addChild(Node *child)
     {
         //dd in children vector
        children.push_back(child);
     }
     Node* search(string target)
     {
         //search from starting node, 
         if(name == target)
              return this;
         for(Node * child: children)
         {
               Node * result = child->search(target);
               if(result != nullptr)
                  return result;
         }
         return nullptr;
     }

     void makeDead()
     {
         isAlive = false;

     }

     void preOrderUtil(vector<string> &v)
     {
         if(isAlive == true)
            v.push_back(name);
         for(Node * child: children)
         {
             if(child != nullptr)
                child->preOrderUtil(v);
         }
     }
     vector<string> & preOrder(vector<string> &v )
     {
         preOrderUtil(v);
         return v;
     }


};
class ThroneInheritance {
    Node * root;
public:
    ThroneInheritance(string kingName) {
        root = new Node(kingName);     //this root will give the starting node also in tree   
    }
    
    void birth(string parentName, string childName) {
        //1.create a node for child
        //2.add that child into parent node

        //1.create a node for child
        Node * child = new Node(childName);
        
        //2.Add that node to parent
        //So search the parent node and add
        //call search() of Node class , find parent and add child 

        Node * parentNode = root->search(parentName);
        parentNode->addChild(child);
    }
    
    void death(string name) {
        //search the node having name
        Node * node = root->search(name);
        //mark status of this node as DEAD , but child are still there 
        node->makeDead();
    }
    
    vector<string> getInheritanceOrder() {
       vector<string>InheritanceOrder;
         root->preOrder(InheritanceOrder); 
         return InheritanceOrder;
    }
};
*/

//================================================================

//Approach 2
//Using a map to store each Node address

/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
   string name;
   vector<Node*> children;
   bool isAlive;
  public:
     Node(string kingName)
     {
         //initialise data members
         name = kingName;
         isAlive = true;
     }      

     void addChild(Node *child)
     {
         //dd in children vector
        children.push_back(child);
     }
     Node* search(string target)
     {
         //search from starting node, 
         if(name == target)
              return this;
         for(Node * child: children)
         {
               Node * result = child->search(target);
               if(result != nullptr)
                  return result;
         }
         return nullptr;
     }

     void makeDead()
     {
         isAlive = false;

     }

     void preOrderUtil(vector<string> &v)
     {
         if(isAlive == true)
            v.push_back(name);
         for(Node * child: children)
         {
             if(child != nullptr)
                child->preOrderUtil(v);
         }
     }
     vector<string> & preOrder(vector<string> &v )
     {
         preOrderUtil(v);
         return v;
     }
};

class ThroneInheritance {
    Node * root;
    unordered_map<string,Node *> nodeDetails;
public:
    ThroneInheritance(string kingName) {
        root = new Node(kingName);     //this root will give the starting node also in tree 
        nodeDetails[kingName] = root;  //add node Address in map  
    }
    
    void birth(string parentName, string childName) {
        //1.create a node for child
        //2.add that child into parent node

        //1.create a node for child
        Node * child = new Node(childName);
        //add to map
        nodeDetails[childName] = child;
        
        //2.Add that node to parent
        //So search the parent node via map( and node is always there as given in question) 
        //So find parent and add child 

        //Basically we donot need to search parent it will be there
          Node * parentNode = nodeDetails[parentName];
          parentNode->addChild(child);
    }
    
    void death(string name) {
        //search the node having name
        Node * node = nodeDetails[name];
        //mark status of this node as DEAD , but child are still there 
        node->makeDead();
    }
    
    vector<string> getInheritanceOrder() {
       vector<string>InheritanceOrder;
         root->preOrder(InheritanceOrder); 
         return InheritanceOrder;
    }
};


//================================================================
*/

//Approach 3
//We can avoid the dependency of Tree by using a map<string,vector of children>
//Set - to keep track of dead person ( we can also take map for this , but set is fine)
//Instead of separate set/map for dead person  trac, we can take first map only 
//Ex:map<string ,pair<bool,vector of children>> ..bool tell the status of person-dead/alive ( here key value in map)

#include<bits/stdc++.h>
using namespace std;

class ThroneInheritance {
    string king;  // the starting king
    unordered_map<string,vector<string>> parentToChild;
    set<string> deadPeople;
public:
    ThroneInheritance(string kingName) {
        king = kingName;     //starting king
        
    }
    
    void birth(string parentName, string childName) {
        parentToChild[parentName].push_back(childName);
               
    }
    
    void death(string name) {
        deadPeople.insert(name);
    }
    
    //DFS or Preorder Traversal
    void preOrderUtil(string name,vector<string> &v)
    {
          // check if not dead
         if(deadPeople.count(name)==0)  //king is alive
            v.push_back(name);
         for(string child: parentToChild[name] )
         {
               preOrderUtil(child,v); 
         }
    }
     vector<string> & preOrder(vector<string> &v )
     {
         //Do dfs or preorder traversal  
         preOrderUtil(king,v);    
         return v;

     }
    vector<string> getInheritanceOrder() {
        vector<string>InheritanceOrder;
         preOrder(InheritanceOrder); 
         return InheritanceOrder;
    }
};


/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */

int main() {
    ThroneInheritance ti("king");
 
    ti.birth("king", "andy");
    ti.birth("king", "bob");
    ti.birth("king", "catherine");
    ti.birth("andy", "matthew");
    ti.birth("bob", "alex");
    ti.birth("bob", "asha");
    ti.death("king");

    vector<string> order = ti.getInheritanceOrder();
     cout<<"No of People in Inheritance Order="<<order.size()<<endl;
     cout<<"Inheritance Order:"<<endl;
    for (string name : order) {
        cout << name << " ";
    }
    return 0;
}
