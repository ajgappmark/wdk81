/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:
    copied.h

Abstract:
    This file has all the type definitions that need to be copied from the dev code. 
    This will be removed and replaced with direct references to the header files that contain
    the defines
    
Revision History:
      When        What
    ----------    ----------------------------------------------
    09-04-2007    Created

Notes:

--*/
#pragma once

#define HVL_TIMED_CTXS_BLOCKED          0x00000001
#define HVL_CTXS_IN_PROGRESS            0x00000002


typedef enum _MP_PORT_TYPE
{
    HELPER_PORT,
    EXTSTA_PORT,
    EXTAP_PORT,
    EMPTY_PORT
} MP_PORT_TYPE, *PMP_PORT_TYPE;

typedef enum _STA_ASSOC_STATE
{
    ASSOC_STATE_NOT_ASSOCIATED = 0,
    ASSOC_STATE_READY_TO_ASSOCIATE,
    ASSOC_STATE_STARTED_ASSOCIATION,
    ASSOC_STATE_WAITING_FOR_JOIN,
    ASSOC_STATE_JOINED,
    ASSOC_STATE_REMOTELY_DEAUTHENTICATED,
    ASSOC_STATE_WAITING_FOR_AUTHENTICATE,
    ASSOC_STATE_RECEIVED_AUTHENTICATE,
    ASSOC_STATE_REMOTELY_DISASSOCIATED,
    ASSOC_STATE_WAITING_FOR_ASSOCIATE,
    ASSOC_STATE_RECEIVED_ASSOCIATE,
    ASSOC_STATE_ASSOCIATED    
} STA_ASSOC_STATE, *PSTA_ASSOC_STATE  ;

typedef enum _STA_CONNECT_STATE{
    CONN_STATE_DISCONNECTED,
    CONN_STATE_IN_RESET,
    CONN_STATE_READY_TO_CONNECT,
    CONN_STATE_READY_TO_ROAM    
} STA_CONNECT_STATE, *PSTA_CONNECT_STATE;

// Adapter status flags and manipulation macros
#define MP_ADAPTER_PAUSED       0x00000001
#define MP_ADAPTER_PAUSING      0x00000002
#define MP_ADAPTER_HALTING      0x00000010
#define MP_ADAPTER_IN_RESET     0x00000020
#define MP_ADAPTER_REMOVING     0x00000040
#define MP_ADAPTER_SURPRISE_REMOVED 0x00000100

typedef enum _PENDING_OP_TYPE
{
    PENDING_OP_JOIN_REQ,
    PENDING_OP_CONN_START,
    PENDING_OP_EX_ACCESS_REQ,
    PENDING_OP_RESET_REQ,
    PENDING_OP_CH_SW_REQ,
    PENDING_OP_START_BSS_REQ,
    PENDING_OP_STOP_BSS_REQ,
    PENDING_OP_DEF_KEY,
    PENDING_OP_OPERATING_PHY_ID,
    PENDING_OP_DESIRED_PHY_ID_LIST,
    PENDING_OP_NIC_POWER_STATE
}PENDING_OP_TYPE;

typedef enum _HVL_PENDING_OP_TYPE
{
    HVL_PENDING_OP_EX_ACCESS
}HVL_PENDING_OP_TYPE;

#define HW_MAX_NUMBER_OF_MAC                    3

// Adapter status flags and manipulation macros
#define HW_ADAPTER_PAUSED           0x00000001
#define HW_ADAPTER_PAUSING          0x00000002
#define HW_ADAPTER_HALTING          0x00000010
#define HW_ADAPTER_IN_RESET         0x00000020
#define HW_ADAPTER_IN_DOT11_RESET   0x00000040
#define HW_ADAPTER_HAL_IN_RESET     0x00000080
#define HW_ADAPTER_IN_CONTEXT_SWITCH    0x00000100
#define HW_ADAPTER_SURPRISE_REMOVED 0x00000200
#define HW_ADAPTER_IN_LOW_POWER     0x00000400
#define HW_ADAPTER_IN_CHANNEL_SWITCH    0x00000800

// Context status flags
#define HW_MAC_CONTEXT_VALID            0x00000001
#define HW_MAC_CONTEXT_ACTIVE           0x00000002
#define HW_MAC_CONTEXT_ACTIVATING       0x00000004
#define HW_MAC_CONTEXT_PAUSED           0x00000010
#define HW_MAC_CONTEXT_PAUSING          0x00000020
#define HW_MAC_CONTEXT_IN_DOT11_RESET   0x00000040
#define HW_MAC_CONTEXT_LINK_UP          0x00000100

