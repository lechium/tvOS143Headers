//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWNetworkAgent-Protocol.h"

@class NEPolicySession, NSMutableDictionary, NSString, NSUUID, NWNetworkAgentRegistration;

@interface IDSTransportLevelAgent : NSObject <NWNetworkAgent>
{
    NSMutableDictionary *_multiplexers;	// 8 = 0x8
    NSMutableDictionary *_clientMultiplexer;	// 16 = 0x10
    _Bool active;	// 24 = 0x18
    NSUUID *agentUUID;	// 32 = 0x20
    NWNetworkAgentRegistration *_registration;	// 40 = 0x28
    NEPolicySession *_session;	// 48 = 0x30
    struct NEVirtualInterface_s *_interface;	// 56 = 0x38
}

+ (id)agentFromData:(id)arg1;	// IMP=0x0000000100428a7c
+ (id)agentType;	// IMP=0x0000000100428a5c
+ (id)agentDomain;	// IMP=0x00000001004289dc
+ (id)sharedInstance;	// IMP=0x0000000100427e40
- (void).cxx_destruct;	// IMP=0x000000010042a73c
@property struct NEVirtualInterface_s *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NEPolicySession *session; // @synthesize session=_session;
@property(retain, nonatomic) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;	// IMP=0x000000010042a454
- (_Bool)assertAgentWithOptions:(id)arg1;	// IMP=0x000000010042a2fc
- (_Bool)startAgentWithOptions:(id)arg1;	// IMP=0x000000010042a1a4
- (void)closeNexusWithOptions:(id)arg1;	// IMP=0x0000000100429e18
- (_Bool)requestNexusWithOptions:(id)arg1;	// IMP=0x0000000100429434
- (void)unregisterMultiplexerForIdentifier:(id)arg1;	// IMP=0x0000000100429214
- (void)registerMultiplexer:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100428fb0
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
@property(copy, nonatomic) NSString *agentDescription;
- (id)copyAgentData;	// IMP=0x0000000100428c88
- (id)multiplexerForIdentifier:(id)arg1;	// IMP=0x0000000100428c08
- (id)init;	// IMP=0x0000000100428ae8

// Remaining properties
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic) _Bool supportsListenRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

