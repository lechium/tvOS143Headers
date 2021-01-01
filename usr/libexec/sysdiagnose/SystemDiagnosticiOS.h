//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SystemDiagnostic.h"

__attribute__((visibility("hidden")))
@interface SystemDiagnosticiOS : SystemDiagnostic
{
    _Bool _tailspinOnly;	// 56 = 0x38
    _Bool _vibrateStart;	// 57 = 0x39
    _Bool _wasLockedAtLaunch;	// 58 = 0x3a
    int _idsCase;	// 60 = 0x3c
    long long _maxHistory;	// 64 = 0x40
    long long _openIssueFiler;	// 72 = 0x48
    long long _statusBar;	// 80 = 0x50
}

@property _Bool wasLockedAtLaunch; // @synthesize wasLockedAtLaunch=_wasLockedAtLaunch;
@property int idsCase; // @synthesize idsCase=_idsCase;
@property long long statusBar; // @synthesize statusBar=_statusBar;
@property long long openIssueFiler; // @synthesize openIssueFiler=_openIssueFiler;
@property long long maxHistory; // @synthesize maxHistory=_maxHistory;
@property _Bool vibrateStart; // @synthesize vibrateStart=_vibrateStart;
@property _Bool tailspinOnly; // @synthesize tailspinOnly=_tailspinOnly;
- (void)startIDSConnection;	// IMP=0x0000000100051490
- (void)run;	// IMP=0x0000000100050fdc
- (id)parseSizeToString:(unsigned long long)arg1;	// IMP=0x0000000100050f78
- (id)searchForTransfer:(id)arg1;	// IMP=0x0000000100050c14
- (void)getSettings;	// IMP=0x0000000100050bd0
- (void)overrideSettings;	// IMP=0x0000000100050a90
- (void)getUserSettings;	// IMP=0x000000010005070c
- (void)configureDefaultSettings;	// IMP=0x00000001000504f0
- (void)launchSettings_async;	// IMP=0x0000000100050368
- (void)gatherDiagnostic;	// IMP=0x0000000100050118
- (void)triggerRemoteSysdiagnoses;	// IMP=0x00000001000500cc
- (void)triggerAirPodLogs:(_Bool)arg1;	// IMP=0x0000000100050054
- (void)triggerFromBridge;	// IMP=0x0000000100050050
- (_Bool)triggerCosysdiagnose;	// IMP=0x0000000100050048
- (void)prompt;	// IMP=0x0000000100050044
- (void)dropCosysdiagnoseError:(id)arg1;	// IMP=0x0000000100050034
- (void)sendPathToArchive;	// IMP=0x000000010004ff20
- (void)sendDefaultsInstructions;	// IMP=0x000000010004fe9c
- (void)sendFailedInstructions;	// IMP=0x000000010004fe18
- (void)sendUnableToCreateMsg;	// IMP=0x000000010004fd94
- (void)createFileAndTransfer:(id)arg1 atLocation:(id)arg2;	// IMP=0x000000010004fc80
- (_Bool)readCosysdiagnoseSetting;	// IMP=0x000000010004fbc8
- (_Bool)makeOutputDirectory;	// IMP=0x000000010004f45c
- (id)defaultBaseDirectory;	// IMP=0x000000010004f448
- (id)init;	// IMP=0x000000010004f3b0

@end
