#include<iostream>
#include<string>
using namespace std;
class Automobile{
public:
    string type, company;
    int year;
};
class TreeNode{
public:
    Automobile a;
    TreeNode *left, *right;
    TreeNode(string t, string c, int y){
        a = {t,c,y};
        left = right = NULL;
    }
};
TreeNode* insertion(TreeNode* root, Automobile data){
    if(!root) return new TreeNode(data.type,data.company,data.year);
    if(root->a.year == data.year) return root;
    if(root->a.year > data.year) root->left = insertion(root->left,data);
    else root->right = insertion(root->right,data);
    return root;
}
void traversal(TreeNode* root, int choice){
    if(!root) return;
    if(choice == 1) cout<<root->a.type<<" "<<root->a.company<<" "<<root->a.year<<endl;
    traversal(root->left,choice);
    if(choice == 2) cout<<root->a.type<<" "<<root->a.company<<" "<<root->a.year<<endl;
    traversal(root->right,choice);
    if(choice == 3) cout<<root->a.type<<" "<<root->a.company<<" "<<root->a.year<<endl;
}
TreeNode* deletion(TreeNode* root, int year){
    if(!root) return NULL;
    if(year < root->a.year) root->left = deletion(root->left, year);
    else if(year > root->a.year) root->right = deletion(root->right, year);
    else {
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL || root->right == NULL){
            return (root->left != NULL) ? root->left : root->right;
        }
        else{ // root->left != NULL and root->right != NULL
            TreeNode* temp = root->right;
            while(temp->left != NULL) temp = temp->left;
            root->a = temp->a;
            root->right = deletion(root->right,temp->a.year);
        }
    }
    return root;
}
int main(){
    TreeNode* root = NULL;
    int choice;
    while(true){
        cout<<"\n1.Insertion    2.Deletion    3.Preorder"
            <<"\n4.Inorder      5.Postorder   6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:{
                Automobile data;
                cout<<"Enter type, company, year: ";
                cin>>data.type>>data.company>>data.year;
                root = insertion(root,data);
                break;
            }
            case 2:{
                int year;
                cout<<"Enter year to delete: ";
                cin>>year;
                root = deletion(root,year);
                break;
            }
            case 3: cout<<"Preorder:\n"; traversal(root,1); break;
            case 4: cout<<"Inorder:\n"; traversal(root,2); break;
            case 5: cout<<"Postorder:\n"; traversal(root,3); break;
            case 6: return 0;
            default: cout<<"Invalid Case\n";
        }
    }
}