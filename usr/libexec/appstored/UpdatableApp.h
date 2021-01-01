//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UpdatableApp-Protocol.h"

@class NSNumber, NSString;

@interface UpdatableApp : NSObject <UpdatableApp>
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_downloaderDSID;	// 16 = 0x10
    NSNumber *_purchaserDSID;	// 24 = 0x18
    NSNumber *_storeExternalVersionID;	// 32 = 0x20
    NSNumber *_storeItemID;	// 40 = 0x28
    NSNumber *_storefrontID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001002847ac
@property(readonly) NSNumber *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(readonly) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly) NSNumber *storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(readonly) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, copy) NSString *description;
- (id)initWithStoreItemID:(id)arg1 externalVersionID:(id)arg2;	// IMP=0x0000000100284688
- (id)initWithApplicationProxy:(id)arg1 ignoreEVID:(_Bool)arg2;	// IMP=0x00000001002844cc
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x00000001002844bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
