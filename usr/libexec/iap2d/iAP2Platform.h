//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface iAP2Platform : NSObject
{
    _Bool _IAPLoggingEnabled;	// 8 = 0x8
}

+ (_Bool)IsiPad;	// IMP=0x0000000100044f84
+ (id)GetInstance;	// IMP=0x0000000100044f10
+ (id)accessoryHomeDirectory;	// IMP=0x0000000100044ec0
@property(readonly, nonatomic) _Bool IAPLoggingEnabled; // @synthesize IAPLoggingEnabled=_IAPLoggingEnabled;
- (id)OSVersion;	// IMP=0x00000001000451a4
- (_Bool)SupportsUSBHostModeAudioInput;	// IMP=0x000000010004519c
- (_Bool)SupportsUSBHostModeAudioOutput;	// IMP=0x0000000100045194
- (_Bool)SupportsUSBHostMode;	// IMP=0x000000010004518c
- (_Bool)HasUSBDigitalAudioOut;	// IMP=0x0000000100045184
- (_Bool)HasUSBDigitalAudioIn;	// IMP=0x000000010004517c
- (_Bool)HasLineOut;	// IMP=0x0000000100045174
- (_Bool)HasLineIn;	// IMP=0x000000010004516c
- (_Bool)HasVideoOut;	// IMP=0x0000000100045164
- (_Bool)HasE75;	// IMP=0x0000000100045158
- (_Bool)SupportsGeniusPlaylist;	// IMP=0x0000000100045150
- (_Bool)SupportsAccessibilityAssistiveTouch;	// IMP=0x0000000100045148
- (_Bool)SupportsAccessibilityPreference;	// IMP=0x0000000100045140
- (_Bool)SupportsAccessibilityOverIap;	// IMP=0x0000000100045138
- (_Bool)SupportsApplicationAutolaunch;	// IMP=0x0000000100045130
- (_Bool)SupportsDisplayPort;	// IMP=0x0000000100045114
- (_Bool)SupportsDisplayPortToHDMI;	// IMP=0x0000000100045108
- (_Bool)SupportsVideoBrowsing;	// IMP=0x0000000100045100
- (_Bool)SupportsITunesU;	// IMP=0x00000001000450f8
- (_Bool)SupportsGeniusMixes;	// IMP=0x00000001000450f0
- (_Bool)SupportNestedPlaylist;	// IMP=0x00000001000450e8
- (_Bool)SupportRestoreVolumeOnExit;	// IMP=0x00000001000450e0
- (void)loadLoggingPreferences;	// IMP=0x0000000100045070
- (void)dealloc;	// IMP=0x000000010004503c
- (id)init;	// IMP=0x0000000100044f90

@end

