#include "rwplcore.h"
#include "rwcore.h"

typedef struct _rwPalQuantRGBABox _rwPalQuantRGBABox;
typedef struct _rwPalQuantOctNode _rwPalQuantOctNode;
typedef struct _rwPalQuantLeafNode _rwPalQuantLeafNode;
typedef struct _rwPalQuantBranchNode _rwPalQuantBranchNode;

extern RwGlobals* RwEngineInstance;

struct _rwPalQuantLeafNode
{
    RwReal weight;
    RwRGBAReal ac;
    RwReal var;
    RwUInt8 palIndex;
};

struct _rwPalQuantBranchNode
{
    _rwPalQuantOctNode* dir[16];
};

struct _rwPalQuantOctNode
{
    _rwPalQuantLeafNode Leaf;
    _rwPalQuantBranchNode Branch;
};

void InitLeaf(_rwPalQuantLeafNode* Leaf)
{
    // What the hell is going on here?
    Leaf->palIndex = 0xff;
    Leaf->weight = 0;
    Leaf->ac.red = 0;
    Leaf->ac.green = 0;
    Leaf->ac.blue = 0;
    Leaf->ac.alpha = 0;
    Leaf->var = 0;
}

void InitBranch(_rwPalQuantBranchNode* Branch)
{
    int x;
    for (x = 0; x < 16; ++x)
    {
        Branch->dir[x] = (_rwPalQuantOctNode*)NULL;
    }
}

void CreateCube()
{
}
