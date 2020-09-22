#ifndef XLINKASSET_H
#define XLINKASSET_H

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	float param[4];
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

#endif