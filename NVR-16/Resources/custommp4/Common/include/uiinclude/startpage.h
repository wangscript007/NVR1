#ifndef _STARTPAGE_H_
#define _STARTPAGE_H_

#include "ui.h"

#define TVX 80
#define TVY -15

#define PIC_START_PLAY        "data/pics/playing.png"
#define PIC_START_REC         "data/pics/manulrencod.png"
#define PIC_START_YUNTAI       "data/pics/yuntaictrl.png"
#define IDC_BUTTON_START_MENU         IDD_DIALOG_START+1
#define IDC_BUTTON_START_PLAY         IDD_DIALOG_START+2
#define IDC_BUTTON_START_PTZ         IDD_DIALOG_START+3
#define IDC_BUTTON_START_RECORD         IDD_DIALOG_START+4
#define IDC_BUTTON_START_TOOL         IDD_DIALOG_START+5
#define IDC_BUTTON_START_LOG         IDD_DIALOG_START+6
#define IDC_BUTTON_START_USER         IDD_DIALOG_START+7
#define IDC_BUTTON_START_NETWORK         IDD_DIALOG_START+8
#define IDC_BUTTON_START_IMAGE         IDD_DIALOG_START+9
#define IDC_BUTTON_START_RECORDSET         IDD_DIALOG_START+10
#define IDC_BUTTON_START_YUNTAI         IDD_DIALOG_START+11
#define IDC_BUTTON_START_ALARM         IDD_DIALOG_START+12
#define IDC_BUTTON_START_EXCEPTION         IDD_DIALOG_START+13
#define IDC_PIC_START_PLAY      IDD_DIALOG_START+14
#define IDC_PIC_START_REC        IDD_DIALOG_START+15
#define IDC_PIC_START_YUNTAI        IDD_DIALOG_START+16





#define IDC_MENUITEM_START_1CH       IDD_DIALOG_START+17

#define IDC_MENUITEM_START_CH1       IDD_DIALOG_START+18
#define IDC_MENUITEM_START_CH2       IDD_DIALOG_START+19
#define IDC_MENUITEM_START_CH3       IDD_DIALOG_START+20
#define IDC_MENUITEM_START_CH4       IDD_DIALOG_START+21

#if (defined (_16CHANNELS_)||defined (_8CHANNELS_))
#define IDC_MENUITEM_START_CH5       IDD_DIALOG_START+22
#define IDC_MENUITEM_START_CH6       IDD_DIALOG_START+23
#define IDC_MENUITEM_START_CH7       IDD_DIALOG_START+24
#define IDC_MENUITEM_START_CH8       IDD_DIALOG_START+25
#endif

#if (defined (_16CHANNELS_)||defined(_NVR_))
#define IDC_MENUITEM_START_CH9       IDD_DIALOG_START+26
#define IDC_MENUITEM_START_CH10      IDD_DIALOG_START+27
#define IDC_MENUITEM_START_CH11      IDD_DIALOG_START+28
#define IDC_MENUITEM_START_CH12      IDD_DIALOG_START+29
#define IDC_MENUITEM_START_CH13      IDD_DIALOG_START+30
#define IDC_MENUITEM_START_CH14      IDD_DIALOG_START+31
#define IDC_MENUITEM_START_CH15      IDD_DIALOG_START+32
#define IDC_MENUITEM_START_CH16      IDD_DIALOG_START+33
#endif

#define IDC_MENUITEM_START_4CH         IDD_DIALOG_START+34
#define IDC_MENUITEM_START_CH1_4       IDD_DIALOG_START+35
#if defined (_16CHANNELS_)||defined (_8CHANNELS_)
#define IDC_MENUITEM_START_CH5_8       IDD_DIALOG_START+36
#endif

#if (defined (_16CHANNELS_)||defined(_NVR_))
#define IDC_MENUITEM_START_CH9_12    IDD_DIALOG_START+37
#define IDC_MENUITEM_START_CH13_16   IDD_DIALOG_START+38
#endif

#if (defined (_8CHANNELS_)||defined (_16CHANNELS_))
#define IDC_MENUITEM_START_8CH	     IDD_DIALOG_START+39
#endif

#ifdef _16CHANNELS_
//#define IDC_MENUITEM_START_CH1_8       IDD_DIALOG_START+40
//#define IDC_MENUITEM_START_CH9_16     IDD_DIALOG_START+41

//#define IDC_MENUITEM_START_16CH        IDD_DIALOG_START+42
#endif

#define IDC_MENUITEM_START_PLAY			IDD_DIALOG_START+43
#define IDC_MENUITEM_START_REC			IDD_DIALOG_START+44
#define IDC_MENUITEM_START_PTZCTRL		IDD_DIALOG_START+45

#define IDC_MENUITEM_START_MAINMENU		IDD_DIALOG_START+46
#define IDC_MENUITEM_START_9CH			IDD_DIALOG_START+47

//#ifndef _NVR_
#define IDC_MENUITEM_START_AUDIO		IDD_DIALOG_START+49//zlb20090831
#define IDC_MENUITEM_START_MUTE			IDD_DIALOG_START+50//zlb20090907
#define IDC_MENUITEM_START_VOL_ADD		IDD_DIALOG_START+51//zlb20090907
#define IDC_MENUITEM_START_VOL_MINUS	IDD_DIALOG_START+52//zlb20090907
//#endif

//#define IDC_MENUITEM_START_MAINMENU	IDD_DIALOG_START+53//zlb20090831
#define IDC_MENUITEM_START_MAINTAIN		IDD_DIALOG_START+54//yqluo 20101023

#define IDC_MENUITEM_START_6CH			IDD_DIALOG_START+60
#define IDC_MENUITEM_START_CH1_6		IDD_DIALOG_START+61
#define IDC_MENUITEM_START_CH3_8		IDD_DIALOG_START+62
#define IDC_MENUITEM_START_CH3_6		IDD_DIALOG_START+63


#define IDC_BUTTON_TASKBAR_START		IDD_DIALOG_TASKBAR+1
//#define IDC_BUTTON_START_				IDD_DIALOG_START+

#define START_HEIGHT 96

BOOL CreateStartPage();
BOOL ShowStartPage();

BOOL CreateStartTvPage();
BOOL CreateTaskbarTvPage();

BOOL CreateTaskbarPage();
BOOL ShowTaskbarPage();

#endif

