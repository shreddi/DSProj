#include <iostream>

using namespace std;

struct singlyNode{
    std::string fileName; //name of local file
    std::string fileVersion; //name of file in .minigit folder
    singlyNode *next;
};

//each of doublyNodes corresponds to a single commit
struct doublyNode{
    int commitNumber;
    singlyNode *head;
    doublyNode *previous;
    doublyNode *next;
};

class miniGit{
    private:
        doublyNode *DLLHead;
    public:
        miniGit();
        ~miniGit();
        void add();
        void remove();
        void commit();
        void checkout();
        bool inDLL(string fileName);
        bool inSLL(string fileName);
        bool inDirectory(string filename);
        void print();
        bool isNumber(string s);
};




