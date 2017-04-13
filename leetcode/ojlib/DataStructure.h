#ifndef _DATASTRUCTURE_H_
#define _DATASTRUCTURE_H_

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>


using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


struct Node {
    int key;
    int value;
    Node(int k , int v):key(k),value(v){}
};


struct ListNode {
    int val;
    struct ListNode *next;
};

class CommonLib
{
    public:
        static TreeNode * getSampleTree();
        static ListNode * getLinkList();
        static vector<int> getSampleVector();
        static void randomShuffle(vector<int> &p);
        static checkOrder(const vector<int> &p);
};

#endif
