//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASPolicyManager : NSObject
{
}

+ (id)getPolicyForBitIndex:(unsigned long long)arg1;	// IMP=0x00000001000328e0
+ (unsigned long long)getBitmaskForPolicy:(id)arg1;	// IMP=0x0000000100032884
+ (id)allPredictingPoliciesForPlatform;	// IMP=0x0000000100032858
+ (id)allPoliciesForPlatform;	// IMP=0x000000010003282c
+ (void)initializeAllPolicies;	// IMP=0x00000001000321a8

@end
