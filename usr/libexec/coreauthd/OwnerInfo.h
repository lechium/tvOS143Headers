//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OwnerInfo : NSObject
{
    int _pid;	// 8 = 0x8
    CDUnknownBlockType _invalidationBlock;	// 16 = 0x10
    id _proxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100005cc4
@property(readonly, nonatomic) __weak id proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)initWithProcessId:(int)arg1 proxy:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005bec

@end

