#ifndef XCAMERA_H
#define XCAMERA_H

#include "xBase.h"
#include "xMath3.h"
#include "xBound.h"
#include "xMath2.h"

#include <rwcore.h>

struct xScene;

enum _tagTransType
{
    eTransType_None,
    eTransType_Interp1,
    eTransType_Interp2,
    eTransType_Interp3,
    eTransType_Interp4,
    eTransType_Linear,
    eTransType_Interp1Rev,
    eTransType_Interp2Rev,
    eTransType_Interp3Rev,
    eTransType_Interp4Rev,
    eTransType_Total
};

struct _tagxCamFollowAsset
{
    float32 rotation;
    float32 distance;
    float32 height;
    float32 rubber_band;
    float32 start_speed;
    float32 end_speed;
};

struct _tagxCamShoulderAsset
{
    float32 distance;
    float32 height;
    float32 realign_speed;
    float32 realign_delay;
};

struct _tagp2CamStaticAsset
{
    uint32 unused;
};

struct _tagxCamPathAsset
{
    uint32 assetID;
    float32 time_end;
    float32 time_delay;
};

struct _tagp2CamStaticFollowAsset
{
    float32 rubber_band;
};

struct xCamAsset : xBaseAsset
{
    xVec3 pos;
    xVec3 at;
    xVec3 up;
    xVec3 right;
    xVec3 view_offset;
    int16 offset_start_frames;
    int16 offset_end_frames;
    float32 fov;
    float32 trans_time;
    _tagTransType trans_type;
    uint32 flags;
    float32 fade_up;
    float32 fade_down;
    union
    {
        _tagxCamFollowAsset cam_follow;
        _tagxCamShoulderAsset cam_shoulder;
        _tagp2CamStaticAsset cam_static;
        _tagxCamPathAsset cam_path;
        _tagp2CamStaticFollowAsset cam_staticFollow;
    };
    uint32 valid_flags;
    uint32 markerid[2];
    uint8 cam_type;
    uint8 pad[3];
};

struct xCamera : xBase
{
    RwCamera* lo_cam;
    xMat4x3 mat;
    xMat4x3 omat;
    xMat3x3 mbasis;
    xBound bound;
    xMat4x3* tgt_mat;
    xMat4x3* tgt_omat;
    xBound* tgt_bound;
    xVec3 focus;
    xScene* sc;
    xVec3 tran_accum;
    float32 fov;
    uint32 flags;
    float32 tmr;
    float32 tm_acc;
    float32 tm_dec;
    float32 ltmr;
    float32 ltm_acc;
    float32 ltm_dec;
    float32 dmin;
    float32 dmax;
    float32 dcur;
    float32 dgoal;
    float32 hmin;
    float32 hmax;
    float32 hcur;
    float32 hgoal;
    float32 pmin;
    float32 pmax;
    float32 pcur;
    float32 pgoal;
    float32 depv;
    float32 hepv;
    float32 pepv;
    float32 orn_epv;
    float32 yaw_epv;
    float32 pitch_epv;
    float32 roll_epv;
    xQuat orn_cur;
    xQuat orn_goal;
    xQuat orn_diff;
    float32 yaw_cur;
    float32 yaw_goal;
    float32 pitch_cur;
    float32 pitch_goal;
    float32 roll_cur;
    float32 roll_goal;
    float32 dct;
    float32 dcd;
    float32 dccv;
    float32 dcsv;
    float32 hct;
    float32 hcd;
    float32 hccv;
    float32 hcsv;
    float32 pct;
    float32 pcd;
    float32 pccv;
    float32 pcsv;
    float32 orn_ct;
    float32 orn_cd;
    float32 orn_ccv;
    float32 orn_csv;
    float32 yaw_ct;
    float32 yaw_cd;
    float32 yaw_ccv;
    float32 yaw_csv;
    float32 pitch_ct;
    float32 pitch_cd;
    float32 pitch_ccv;
    float32 pitch_csv;
    float32 roll_ct;
    float32 roll_cd;
    float32 roll_ccv;
    float32 roll_csv;
    xVec4 frustplane[12];

    xCamera& operator=(const xCamera&);
};

struct xBinaryCamera
{
    struct zone_data
    {
        float32 distance;
        float32 height;
        float32 height_focus;
    };

    struct config
    {
        zone_data zone_rest;
        zone_data zone_above;
        zone_data zone_below;
        float32 move_speed;
        float32 turn_speed;
        float32 stick_speed;
        float32 stick_yaw_vel;
        float32 max_yaw_vel;
        float32 margin_angle;
    };

    config cfg;
    xCamera* camera;
    xQuat cam_dir;
    xVec3* s1;
    xVec3* s2;
    float32 s2_radius;
    xVec2 stick_offset;

    void init();
    void start(xCamera& camera);
    void stop();
    void update(float32 dt);
    void add_tweaks(char const*);
    void set_targets(xVec3 const& par_1, xVec3 const& par_2, float32 par_3);
    void render_debug();
};

float32 xVec3Length(const xVec3* vec);
void xCameraInit(xCamera* cam, uint32 width, uint32 height);
void xCameraSetScene(xCamera* cam, xScene* sc);
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch);
void xCameraExit(xCamera* cam);
void xCameraUpdate(xCamera* cam, float32 dt);
void xCameraBegin(xCamera* cam, int32);
void xCameraEnd(xCamera* cam, float32 seconds, int32 update_scrn_fx);
void xCameraShowRaster(xCamera* cam);
void xCameraSetFOV(xCamera* cam, float32 fov);
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal,
                 float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraMove(xCamera* cam, const xVec3& loc);
float32 xCameraGetFOV(const xCamera* cam);
void xCameraDoCollisions(int32 do_collis, int32 owner);
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat);
void xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude,
                    float32 radius, xVec3* epicenter, xVec3* player);

#endif