#ifndef ZPORTAL_H
#define ZPORTAL_H

#include "../Core/x/xBase.h"

typedef struct xPortalAsset;

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

#endif