//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSNetworkConstraints, ASDCellularIdentity, ASDCellularSettings;

@interface CellularNetworkEvaluator : NSObject
{
    AMSNetworkConstraints *_constraints;	// 8 = 0x8
    ASDCellularIdentity *_identity;	// 16 = 0x10
    ASDCellularSettings *_settings;	// 24 = 0x18
}

+ (id)evaluatorForIdentity:(id)arg1;	// IMP=0x00000001001bae10
- (void).cxx_destruct;	// IMP=0x00000001001bb660
- (long long)evaluateForDownload:(id)arg1;	// IMP=0x00000001001baf08
- (id)initWithIdentity:(id)arg1;	// IMP=0x00000001001bae60

@end

