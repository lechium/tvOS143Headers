//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDate, NSMutableDictionary;

@interface _CPLCloudKitOperationSession : NSObject
{
    NSDate *_startSessionDate;	// 8 = 0x8
    NSDate *_lastOperationDate;	// 16 = 0x10
    NSCountedSet *_taskCounters;	// 24 = 0x18
    NSCountedSet *_currentTaskClasses;	// 32 = 0x20
    NSMutableDictionary *_classCountPerTaskClass;	// 40 = 0x28
    NSMutableDictionary *_cellularClassCountPerTaskClass;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000dc078
- (_Bool)isOngoing;	// IMP=0x00000001000dc050
- (id)status;	// IMP=0x00000001000db8a0
- (id)statusObject;	// IMP=0x00000001000db5dc
- (void)endTask:(id)arg1 withOperationClasses:(id)arg2 operationsAllowingCellular:(id)arg3;	// IMP=0x00000001000db110
- (_Bool)beginTask:(id)arg1;	// IMP=0x00000001000db044
- (id)init;	// IMP=0x00000001000daf68

@end

