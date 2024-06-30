#ifndef ZUI_H
#define ZUI_H

#include "zEnt.h"

#include "xMgr.h"
#include "xIni.h"

struct zUIAsset : xEntAsset
{
    uint32 uiFlags;
    uint16 dim[2];
    uint32 textureID;
    float32 uva[2];
    float32 uvb[2];
    float32 uvc[2];
    float32 uvd[2];
};

struct _zUI : zEnt
{
    zUIAsset* sasset;
    uint32 uiFlags;
    uint32 uiButton;
    uint16 preUpdateIndex;
    uint16 updateIndex;

    _zUI();
};

struct zUIMgr : xMgr
{
    int32 m_preUpdateStart;
    int32 m_preUpdateEnd;
    uint32 m_preUpdateMax;
    _zUI** m_preUpdate;
    int32 m_updateStart;
    int32 m_updateEnd;
    uint32 m_updateMax;
    _zUI** m_update;

    void PreUpdate(zScene* s, float32 dt);
    void Update(zScene* s, float32 dt);
    void Setup(zScene* s);
    void Touch(_zUI* ui);
    void Remove(_zUI* ui);
    void Remove_PreUpdate(_zUI* ui);
    void Remove_Update(_zUI* ui);
    void Add(_zUI* ui);
    void Add_PreUpdate(_zUI* ui);
    void Add_Update(_zUI* ui);
};

extern int32 bad_card_available;
// Another .comm symbol is here ("uknown_common_bss_symbol").
// Maybe some unused variable that was still linked in?
_zUI* sSorted[768];
zUIMgr gUIMgr;

void zUI_Init();
void zUI_Init(void* ent, void* asset);
void zUI_Init(_zUI* ent, xEntAsset* asset);
void zUI_Save(_zUI* ent, xSerial* s);
void zUI_Load(_zUI* ent, xSerial* s);
void zUI_Reset(_zUI* ent);
void zUI_PreUpdate(_zUI* ent, xScene*, float32);
void zUI_Update(_zUI* ent, xScene*, float32 dt);
void zUIRenderAll();
void zUI_Render(xEnt* ent);
int32 zUIEventCB(xBase*, xBase* to, uint32 toEvent, const float32* toParam, xBase*);
void zUI_ParseINI(xIniFile* ini);
int32 zUIPortalEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                       xBase* toParamWidget);
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc);
void zUI_ScenePortalInit(zScene* zsc);
void zUI_PortalToKrabs(uint32 taskNum);
void zUI_ScenePortalUpdate();
void zUI_ScenePortalSave(xSerial* s);
void zUI_ScenePortalLoad(xSerial* s);

#endif
