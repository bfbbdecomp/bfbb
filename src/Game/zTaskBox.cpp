#include "zTaskBox.h"

#include <types.h>

// ztaskbox::load(const ztaskbox::asset_type&)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "load__8ztaskboxFRCQ28ztaskbox10asset_type")

// ztaskbox::read(xSerial&)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "read__8ztaskboxFR7xSerial")

// ztaskbox::write(xSerial&)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "write__8ztaskboxFR7xSerial")

// ztaskbox::start_talk(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "start_talk__8ztaskboxFP10zNPCCommon")

// ztaskbox::talk_callback::reset(ztaskbox&)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "reset__Q28ztaskbox13talk_callbackFR8ztaskbox")

// ztaskbox::stop_talk()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "stop_talk__8ztaskboxFv")

// ztaskbox::enable()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "enable__8ztaskboxFv")

// ztaskbox::disable()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "disable__8ztaskboxFv")

// ztaskbox::reset()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "reset__8ztaskboxFv")

// ztaskbox::initiate()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "initiate__8ztaskboxFv")

// ztaskbox::succeed()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "succeed__8ztaskboxFv")

// ztaskbox::fail()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "fail__8ztaskboxFv")

// ztaskbox::complete()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "complete__8ztaskboxFv")

// ztaskbox::set_callback(ztaskbox::callback*)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "set_callback__8ztaskboxFPQ28ztaskbox8callback")

// ztaskbox::init()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "init__8ztaskboxFv")

// ztaskbox::talk_callback::talk_callback()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "__ct__Q28ztaskbox13talk_callbackFv")

// ztaskbox::exists(ztaskbox::state_enum)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "exists__8ztaskboxFQ28ztaskbox10state_enum")

// ztaskbox::set_state(ztaskbox::state_enum)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "set_state__8ztaskboxFQ28ztaskbox10state_enum")

// ztaskbox::on_talk_start()
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "on_talk_start__8ztaskboxFv")

// ztaskbox::on_talk_stop(ztalkbox::answer_enum)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum")

// ztaskbox::get_text(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zTaskBox.s", "get_text__8ztaskboxFUi")
