//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface _AgentID : NSObject <NSCopying>
{
    int _pid;	// 8 = 0x8
    NSString *_sceneID;	// 16 = 0x10
}

+ (id)withPid:(int)arg1 sceneID:(id)arg2;	// IMP=0x0000000100006228
- (void).cxx_destruct;	// IMP=0x00000001000063d8
@property(readonly, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000063c4
- (unsigned long long)hash;	// IMP=0x0000000100006334
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000627c

@end

