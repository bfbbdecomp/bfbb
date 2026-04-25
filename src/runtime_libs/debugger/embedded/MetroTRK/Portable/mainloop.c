#include "PowerPC_EABI_Support/MetroTRK/trk.h"

asm void TRKNubMainLoop(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    b loop_test

loop_start:
    addi r3, r1, 0x8
    bl TRKGetNextEvent
    cmpwi r3, 0x0
    beq no_event
    lbz r0, 0x8(r1)
    li r30, 0x0
    cmpwi r0, 0x2
    beq request_event
    bge ge_two
    cmpwi r0, 0x0
    beq event_done
    bge shutdown_event
    b event_done

ge_two:
    cmpwi r0, 0x5
    beq support_event
    bge event_done
    b interrupt_event

request_event:
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    bl TRKDispatchMessage
    b event_done

shutdown_event:
    li r31, 0x1
    b event_done

interrupt_event:
    addi r3, r1, 0x8
    bl TRKTargetInterrupt
    b event_done

support_event:
    bl TRKTargetSupportRequest

event_done:
    addi r3, r1, 0x8
    bl TRKDestructEvent
    b loop_test

no_event:
    cmpwi r30, 0x0
    beq poll_input
    lis r3, gTRKInputPendingPtr@ha
    addi r3, r3, gTRKInputPendingPtr@l
    lwz r3, 0x0(r3)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x0
    beq idle

poll_input:
    li r30, 0x1
    bl TRKGetInput
    b loop_test

idle:
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne finish_idle
    bl TRKTargetContinue

finish_idle:
    li r30, 0x0

loop_test:
    cmpwi r31, 0x0
    beq loop_start
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
