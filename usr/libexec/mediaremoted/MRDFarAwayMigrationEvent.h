//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDMigrationEvent.h"

@class MRDeviceInfo, MRPlaybackQueue, MRPlayerPath, NSArray, NSString;

@interface MRDFarAwayMigrationEvent : MRDMigrationEvent
{
    MRPlaybackQueue *_playbackQueue;	// 72 = 0x48
    NSArray *_supportedCommands;	// 80 = 0x50
    NSString *_playbackSessionType;	// 88 = 0x58
    MRPlayerPath *_playerPath;	// 96 = 0x60
    MRDeviceInfo *_deviceInfo;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100029764
- (id)createNotificationInfo;	// IMP=0x0000000100029570
- (void)migrateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002951c
- (void)_prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028ebc
- (id)description;	// IMP=0x0000000100028de0
- (id)initWithUID:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100028978

@end
