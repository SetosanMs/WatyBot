#include "Defines.h"

StopWatch<milliseconds> SkillInjectionStopWatch;
StopWatch<milliseconds> BreathCounter(milliseconds(5500));

gcroot<CChangeChannel^> CC;
gcroot<CSPControl^> SPControl;
gcroot<NotifyIcon^> notifyIcon;

int SkillInjectionSkills[] = {97, 99, 100, 103, 61001005, 4001334, 4201005, 4211011, 4221001, 1001004, 1221009, 1311005, 2201004, 2211003};
int TabHeight[] = {541, 461, 286, 431, 266};
int KeyCodes[] = {VK_SHIFT, VK_SPACE, VK_CONTROL, VK_MENU, VK_INSERT, VK_DELETE, VK_HOME, VK_END, VK_PRIOR, VK_NEXT, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, VK_F1, VK_F2, VK_F3, VK_F4, VK_F5, VK_F6, VK_F7, VK_F8, VK_F9, VK_F10, VK_F11, VK_F12};
