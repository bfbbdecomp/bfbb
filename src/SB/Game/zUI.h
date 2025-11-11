#ifndef ZUI_H
#define ZUI_H

#include "zEnt.h"

#include "xMgr.h"
#include "xIni.h"

struct zUIAsset : xEntAsset
{
    U32 uiFlags;
    U16 dim[2];
    U32 textureID;
    F32 uva[2];
    F32 uvb[2];
    F32 uvc[2];
    F32 uvd[2];
};

struct _zUI : zEnt
{
    zUIAsset* sasset;
    U32 uiFlags;
    U32 uiButton;
    U16 preUpdateIndex;
    U16 updateIndex;
};

struct zUIMgr : xMgr
{
    S32 m_preUpdateStart;
    S32 m_preUpdateEnd;
    U32 m_preUpdateMax;
    _zUI** m_preUpdate;
    S32 m_updateStart;
    S32 m_updateEnd;
    U32 m_updateMax;
    _zUI** m_update;

    void PreUpdate(zScene* s, F32 dt);
    void Update(zScene* s, F32 dt);
    void Setup(zScene* s);
    void Touch(_zUI* ui);
    void Remove(_zUI* ui);
    void Remove_PreUpdate(_zUI* ui);
    void Remove_Update(_zUI* ui);
    void Add(_zUI* ui);
    void Add_PreUpdate(_zUI* ui);
    void Add_Update(_zUI* ui);
};

extern S32 bad_card_available;
// Another .comm symbol is here ("uknown_common_bss_symbol").
// Maybe some unused variable that was still linked in?
extern _zUI* sSorted[768];
extern zUIMgr gUIMgr;

void zUI_Init();
void zUI_Init(void* ent, void* asset);
void zUI_Init(_zUI* ent, xEntAsset* asset);
void zUI_Save(_zUI* ent, xSerial* s);
void zUI_Load(_zUI* ent, xSerial* s);
void zUI_Reset(_zUI* ent);
void zUI_PreUpdate(_zUI* ent, xScene*, F32);
void zUI_Update(_zUI* ent, xScene*, F32 dt);
void zUIRenderAll();
void zUI_Render(xEnt* ent);
S32 zUIEventCB(xBase*, xBase* to, U32 toEvent, const F32* toParam, xBase*);
void zUI_ParseINI(xIniFile* ini);
S32 zUIPortalEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                       xBase* toParamWidget);
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc);
void zUI_ScenePortalInit(zScene* zsc);
void zUI_PortalToKrabs(U32 taskNum);
void zUI_ScenePortalUpdate();
void zUI_ScenePortalSave(xSerial* s);
void zUI_ScenePortalLoad(xSerial* s);

#endif
