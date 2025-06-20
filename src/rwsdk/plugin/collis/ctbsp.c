#include "rwplcore.h"
#include "rwcore.h"
// #include <rwsdk/rpworld.h>
// #include <rwsdk/rtintsec.h>
// #include <rwsdk/rpcollis.h>

struct nodeInfo
{
    u32 type;
    u32 index;
};

typedef struct RpCollBSPTree RpCollBSPTree;

struct RpCollBSPTree
// Blocks
/* anonymous block */ {
    // Range: 0x1C9BE0 -> 0x1CA540
    s32 nStack; // r20
    struct nodeInfo nodeStack[33]; // r29+0x420
    struct RwLine lineStack[33]; // r29+0x100
    struct RwLine currLine; // r29+0xE0
    struct RpCollBSPLeafNode* leaf; // r2
    struct RpCollBSPBranchNode* branch; // r9
    u32 branch_type; // r5
    u32 branch_leftType; // r6
    u32 branch_rightType; // r4
    u32 branch_leftNode; // r3
    u32 branch_rightNode; // r2
    union RwSplitBits lStart; // r29+0x53C
    union RwSplitBits lEnd; // r29+0x538
    union RwSplitBits rStart; // r29+0x534
    union RwSplitBits rEnd; // r29+0x530
    f32 delta; // r5
    //f32 delta; // r5
    //f32 delta; // r6
    //f32 delta; // r5
};

RpCollBSPTree* _rpCollBSPTreeInit(RpCollBSPTree* tree, s32 numLeafNodes)
{
    // Something similar to this?
    // Not quite sure yet
    tree = (RpCollBSPTree*)numLeafNodes;
    if (numLeafNodes + -1 > 0)
    {
        tree = (tree + 4);
        tree = tree + (numLeafNodes + -1) * 0x10;
        return;
    }
    tree = 0;
    tree = (tree + 4);
}

s32 _rpCollBSPTreeMemGetSize(s32 numLeafNodes)
{
}
