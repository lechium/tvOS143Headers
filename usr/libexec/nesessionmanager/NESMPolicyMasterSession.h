//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEPolicySession, NSMutableArray;

@interface NESMPolicyMasterSession : NSObject
{
    unsigned int _currentFilterUnit;	// 8 = 0x8
    NEPolicySession *_policySession;	// 16 = 0x10
    NEPolicySession *_policySessionLow;	// 24 = 0x18
    NSMutableArray *_pathRuleFilterPolicyIDs;	// 32 = 0x20
}

+ (_Bool)lock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029d00
- (void).cxx_destruct;	// IMP=0x000000010002a638
@property(retain) NSMutableArray *pathRuleFilterPolicyIDs; // @synthesize pathRuleFilterPolicyIDs=_pathRuleFilterPolicyIDs;
@property unsigned int currentFilterUnit; // @synthesize currentFilterUnit=_currentFilterUnit;
@property(retain) NEPolicySession *policySessionLow; // @synthesize policySessionLow=_policySessionLow;
@property(retain) NEPolicySession *policySession; // @synthesize policySession=_policySession;
- (_Bool)unregisterSession:(id)arg1;	// IMP=0x000000010002a56c
- (_Bool)registerSession:(id)arg1;	// IMP=0x000000010002a4ec
- (_Bool)apply;	// IMP=0x000000010002a3e8
- (_Bool)removeAllPoliciesLow:(id)arg1;	// IMP=0x000000010002a254
- (_Bool)removeAllPolicies:(id)arg1;	// IMP=0x000000010002a0c0
- (_Bool)addPolicyLow:(id)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100029f4c
- (_Bool)addPolicy:(id)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100029dd8
- (id)initPrivate;	// IMP=0x0000000100029bc4
- (id)init;	// IMP=0x0000000100029b9c

@end
