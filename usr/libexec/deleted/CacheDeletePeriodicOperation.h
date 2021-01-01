//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CacheDeleteOperation.h"

#import "CacheDeleteOperation-Protocol.h"

@class CDPeriodicOperationResult, NSArray, NSString;
@protocol CDPurgeableResultCache;

__attribute__((visibility("hidden")))
@interface CacheDeletePeriodicOperation : CacheDeleteOperation <CacheDeleteOperation>
{
    CDPeriodicOperationResult *_periodicResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002c964
@property(retain, nonatomic) CDPeriodicOperationResult *periodicResult; // @synthesize periodicResult=_periodicResult;
- (void)_startOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b43c
- (id)initWithInfo:(id)arg1 services:(id)arg2 volumes:(id)arg3;	// IMP=0x000000010002b134

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <CDPurgeableResultCache> resultCache;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *volumes;

@end

