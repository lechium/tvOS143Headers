//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TVSettingsRestrictionsFacade : NSObject <NSCacheDelegate>
{
    NSString *_contentRestrictionsCountryCode;	// 8 = 0x8
}

+ (unsigned long long)_restrictionSettingsAccessModeFromAccessMode:(unsigned long long)arg1;	// IMP=0x00000001000c893c
+ (unsigned long long)_accessModeFromRestrictionSettingsAccessMode:(unsigned long long)arg1;	// IMP=0x00000001000c8924
+ (id)longDisplayNameForRestriction:(id)arg1;	// IMP=0x00000001000c5e88
+ (id)displayNameForRestriction:(id)arg1;	// IMP=0x00000001000c5dc4
+ (id)sharedInstance;	// IMP=0x00000001000c5b8c
- (void).cxx_destruct;	// IMP=0x00000001000c895c
@property(copy, nonatomic) NSString *contentRestrictionsCountryCode; // @synthesize contentRestrictionsCountryCode=_contentRestrictionsCountryCode;
- (id)_allDictionaryForDomain:(id)arg1;	// IMP=0x00000001000c85d8
- (id)_noneDictionaryForDomain:(id)arg1;	// IMP=0x00000001000c828c
- (id)_dictionaryForDomain:(id)arg1 withRanking:(id)arg2;	// IMP=0x00000001000c7efc
- (id)_orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000001000c79b4
- (id)_purgableRatingsDictionary;	// IMP=0x00000001000c7834
- (void)_restrictionSettingsDidChange:(id)arg1;	// IMP=0x00000001000c778c
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000001000c7788
@property(nonatomic) _Bool allowsBackgroundAppRefreshModification;
@property(nonatomic) _Bool allowsLocationServicesUI;
@property(nonatomic) unsigned long long allowsConferenceRoomDisplaySettingsUI;
@property(nonatomic) unsigned long long allowsAirPlaySettingsUI;
@property(nonatomic) _Bool replayKitAllowed;
@property(nonatomic) _Bool allowsProfileChanges;
@property(nonatomic) _Bool allowsProfilePrivacyChanges;
@property(nonatomic) _Bool allowsPrivateMessaging;
@property(nonatomic) _Bool allowsNearbyMultiplayer;
@property(nonatomic) long long allowedMultiplayerGamingType;
@property(nonatomic) _Bool gameCenterEnabled;
@property(nonatomic) _Bool allowsSiriExplicitLanaguage;
@property(nonatomic) unsigned long long allowsBookstoreErotica;
@property(nonatomic) unsigned long long allowsExplicitContent;
@property(nonatomic) _Bool allowsInAppPurchase;
@property(nonatomic) unsigned long long allowsPurchaseAndRental;
@property(nonatomic) _Bool allowsMusicVideos;
@property(nonatomic) _Bool allowsMusicSocialFeatures;
@property(nonatomic) _Bool allowsVideoSubscriberAccountChanges;
@property(readonly, nonatomic) _Bool automaticDateAndTimeIsManaged;
@property(readonly, nonatomic) _Bool allowsRemoteAppPairingIsManaged;
@property(nonatomic) _Bool allowsRemoteAppPairing;
@property(copy, nonatomic) NSDictionary *appRestriction;
@property(readonly, copy, nonatomic) NSArray *availableAppRestrictions;
@property(copy, nonatomic) NSDictionary *tvShowRestriction;
@property(readonly, copy, nonatomic) NSArray *availableTVShowRestrictions;
@property(copy, nonatomic) NSDictionary *movieRestriction;
@property(readonly, copy, nonatomic) NSArray *availableMovieRestrictions;
@property(readonly, copy, nonatomic) NSArray *availableContentRestrictionsCountryCodes;
@property(readonly, nonatomic) _Bool restrictionsEnabled;
- (void)resetRestrictionSettings;	// IMP=0x00000001000c5f68
- (void)setRestrictionsPasscode:(id)arg1;	// IMP=0x00000001000c5f4c
- (id)init;	// IMP=0x00000001000c5bf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

