//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCHacks.h>

@interface MCServerSideHacks : MCHacks
{
}

+ (id)mergeArray:(id)arg1 withArray:(id)arg2;	// IMP=0x000000010007bb44
+ (id)sharedHacks;	// IMP=0x0000000100078ea0
+ (void)setAllowHacksToCallExternalComponents:(_Bool)arg1;	// IMP=0x0000000100078e94
- (void)resetSettingsSender:(id)arg1;	// IMP=0x000000010007cebc
- (void)applyGracePeriodSettingFromKeybagToUserSettings;	// IMP=0x000000010007cd58
- (void)recomputeHacksAfterProfileChangesEffectiveUserSettings:(id)arg1 sendNotifications:(_Bool)arg2;	// IMP=0x000000010007cc5c
- (void)recomputeWebContentFilterEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2 outMechanismChangedDetected:(_Bool *)arg3;	// IMP=0x000000010007bc24
- (id)recomputeAccountVPNAssociations;	// IMP=0x000000010007bb3c
- (void)recomputeAppRulesForNetworkExtension;	// IMP=0x000000010007b9d0
- (void)recomputeAppOptionsEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2;	// IMP=0x000000010007abe8
- (_Bool)applyEffectiveSettings:(id)arg1 toSettings:(id)arg2 withOldRestrictions:(id)arg3 newRestrictions:(id)arg4;	// IMP=0x000000010007a978
- (void)applyEffectiveSettings:(id)arg1 toOtherSubsystemsPasscode:(id)arg2 credentialSet:(id)arg3;	// IMP=0x0000000100079ee4
- (void)_checkCarrierBundleRelatedSettings;	// IMP=0x0000000100079d34
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;	// IMP=0x000000010007905c
- (_Bool)_anyBoolRestrictionChangedInSet:(id)arg1 oldRestrictions:(id)arg2 newRestrictions:(id)arg3;	// IMP=0x0000000100078edc

@end
