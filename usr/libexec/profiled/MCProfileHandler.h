//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCInteractionClientDelegate-Protocol.h"

@class MCProfile, NSArray, NSMutableArray, NSMutableDictionary;

@interface MCProfileHandler : NSObject <MCInteractionClientDelegate>
{
    MCProfile *_profile;	// 8 = 0x8
    NSMutableArray *_payloadHandlers;	// 16 = 0x10
    NSMutableDictionary *_UUIDToPersistentIDMap;	// 24 = 0x18
    _Bool _isSetAside;	// 32 = 0x20
}

+ (id)payloadsOfClass:(Class)arg1 removedBeforePayload:(id)arg2;	// IMP=0x0000000100021124
+ (id)payloadsOfClass:(Class)arg1 installedBeforePayload:(id)arg2;	// IMP=0x0000000100020f7c
+ (id)userCancelledError;	// IMP=0x000000010001ebbc
- (void).cxx_destruct;	// IMP=0x000000010002141c
@property(readonly, retain, nonatomic) NSArray *payloadHandlers; // @synthesize payloadHandlers=_payloadHandlers;
@property(readonly, nonatomic) _Bool isSetAside; // @synthesize isSetAside=_isSetAside;
@property(readonly, retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x00000001000213ec
- (id)persistentIDForCertificateUUID:(id)arg1;	// IMP=0x00000001000213b8
- (void)setUserInputResponses:(id)arg1;	// IMP=0x00000001000213b4
- (_Bool)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 outError:(id *)arg3;	// IMP=0x00000001000212c4
- (id)userInputArray;	// IMP=0x00000001000212bc
- (void)convertPayloadWithUUIDToUnknownPayload:(id)arg1;	// IMP=0x0000000100020d60
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x0000000100020ad0
- (void)unsetAside;	// IMP=0x0000000100020948
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x0000000100020744
- (_Bool)isInstalled;	// IMP=0x0000000100020604
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00000001000204b4
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100020304
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x0000000100020124
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001f940
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001ee38
- (id)_profileInstallationErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010001ed34
- (id)userCancelledError;	// IMP=0x000000010001ec54
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010001e8bc
- (id)payloadHandlerWithUUID:(id)arg1;	// IMP=0x000000010001e718

@end

