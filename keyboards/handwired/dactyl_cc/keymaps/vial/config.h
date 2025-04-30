#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* mouse config */
// #define MOUSEKEY_DELAY          0
// Lowering MOUSEKEY_INTERVAL raises the cursor speed significantly, you may want to lower MOUSEKEY_MAX_SPEED (default: 10)
// #define MOUSEKEY_INTERVAL       20
// #define MOUSEKEY_MAX_SPEED       7
// #define MOUSEKEY_WHEEL_DELAY 0

/**
 设置图层切换按键次数

 此处设置为1次，
 即按键1次即可切换图层

 例如，当前为图层0，按下切换键后，切换为图层1
    反之亦然

 切换键即使用 TT() 定义的按键
 */
#define TAPPING_TOGGLE 1

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* 使用电压识别右半键盘 */
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

/*
 * 启动检测重试程序
 * 若 USB 连接失败，会尝试重新连接
 */
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#define VIAL_KEYBOARD_UID {0xE2, 0x95, 0x7D, 0x11, 0x4D, 0x12, 0xE6, 0x45}
