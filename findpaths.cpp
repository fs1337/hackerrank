void pathtoNode(BTNode* root,int* path,int pos, int a)
{    
    if(root==NULL) return;

    //find the leaf node
    if(root->val == a &&root->left==NULL &&root->right==NULL){
        path[pos++]=root->val;
        for(int i=0;i<pos;i++)
            printf("%d ",path[i]);
        printf("\n");
        return;
    }
    else{
        path[pos++]=root->val;
        pathtoNode(root->left,path,pos,a);
        pathtoNode(root->right,path,pos,a);
    }
}


//The caller function has: 
int *path = new int[MAX_HEIGHT];
pathtoNode(root,path,0,12);
