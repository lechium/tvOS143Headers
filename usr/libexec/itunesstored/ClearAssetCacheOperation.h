//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSUpdatableAssetCacheManager;

@interface ClearAssetCacheOperation : ISOperation
{
    SSUpdatableAssetCacheManager *_cacheManager;	// 96 = 0x60
    CDUnknownBlockType _completion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001001053bc
- (void)run;	// IMP=0x0000000100105244
- (id)initWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100105168

@end

