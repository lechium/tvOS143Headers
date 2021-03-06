//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBIconCacheKey.h"

#import "HBFolderIconCacheItem-Protocol.h"

@class HBIconCacheItemConfiguration, NSArray, NSString;
@protocol HBIconCacheKey;

@interface HBFolderIconCacheItem : HBIconCacheKey <HBFolderIconCacheItem>
{
    _Bool _incomplete;	// 16 = 0x10
    NSArray *_applicationInfos;	// 24 = 0x18
    HBIconCacheItemConfiguration *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003d3b8
@property(readonly, nonatomic) HBIconCacheItemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic, getter=isIncomplete) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(readonly, nonatomic) NSArray *applicationInfos; // @synthesize applicationInfos=_applicationInfos;
@property(readonly, nonatomic) id <HBIconCacheKey> cacheKey;
- (id)initWithApplicationInfos:(id)arg1 incomplete:(_Bool)arg2 configuration:(id)arg3;	// IMP=0x000000010003d264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

