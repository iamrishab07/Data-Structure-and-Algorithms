#include<bits/stdc++.h>

using namespace std;
struct Tree {
  int key;
  Tree*left = NULL,*right = NULL;
}

void iterativeInOrderTraversal(Tree *root){
  if(!root) return;

  stack<Tree*> s;
  s.push(root);

  while(!s.empty()){
    while(root->left && root){
        s.push(root->left);
        root = root->left;
    }

    Tree*curr = s.top();
    s.pop();

    cout<<curr->key<<endl;
    if(curr->right){
      s.push(curr->right);
    }

    root = curr->right;
  }

  return;
}

int main(){

  return 0;
}
