//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class OTManager;
@protocol OctagonEntitlementBearerProtocol;

__attribute__((visibility("hidden")))
@interface OctagonXPCEntitlementChecker : NSProxy
{
    OTManager *_manager;	// 8 = 0x8
    id <OctagonEntitlementBearerProtocol> _entitlementBearer;	// 16 = 0x10
}

+ (id)createWithManager:(id)arg1 entitlementBearer:(id)arg2;	// IMP=0x000000010010e73c
+ (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000010010e6e8
- (void).cxx_destruct;	// IMP=0x000000010010e6a8
@property(retain) id <OctagonEntitlementBearerProtocol> entitlementBearer; // @synthesize entitlementBearer=_entitlementBearer;
@property(retain) OTManager *manager; // @synthesize manager=_manager;
- (void)failFetchEscrowContents:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010010e57c
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010010e3a0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010010e344
- (id)initWithManager:(id)arg1 entitlementBearer:(id)arg2;	// IMP=0x000000010010e2c0

@end

