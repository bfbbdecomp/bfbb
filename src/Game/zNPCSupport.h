#ifndef ZNPCSUPPORT_H
#define ZNPCSUPPORT_H

void NPCWidget_Shutdown();
void NPCSupport_Startup();
void NPCSupport_ScenePrepare();
void NPCSupport_SceneFinish();
void NPCSupport_Timestep(float32 dt);
void NPCSupport_SceneReset();
void NPCSupport_Shutdown();
void NPCSupport_ScenePostInit();

#endif