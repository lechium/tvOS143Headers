/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSNumber, NSSet;

@interface LSApplicationRestrictionsManager : NSObject {

	NSObject*<OS_dispatch_queue> _restrictionsAccessQueue;
	NSObject*<OS_dispatch_queue> _signerIdentitySyncQueue;
	NSObject*<OS_dispatch_source> _signerIdentitySyncSource;
	NSNumber* _whitelistState;
	unsigned long long _knownSystemAppDeletionState;
	NSSet* _whitelistedBundleIDs;
	NSSet* _blacklistedBundleIDs;
	NSSet* _restrictedBundleIDs;
	NSNumber* _maximumRating;

}

@property (getter=isWhitelistEnabled,readonly) BOOL whitelistEnabled; 
@property (getter=isOpenInRestrictionInEffect,readonly) BOOL openInRestrictionInEffect; 
@property (getter=isAdTrackingEnabled,readonly) BOOL adTrackingEnabled; 
@property (getter=isLimitAdTrackingForced,readonly) BOOL limitAdTrackingForced; 
@property (getter=isSystemAppDeletionEnabled,readonly) BOOL systemAppDeletionEnabled; 
@property (readonly) NSNumber * maximumRating;                                                       //@synthesize maximumRating=_maximumRating - In the implementation block
@property (readonly) NSSet * restrictedBundleIDs;                                                    //@synthesize restrictedBundleIDs=_restrictedBundleIDs - In the implementation block
@property (readonly) NSSet * blacklistedBundleIDs;                                                   //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
@property (readonly) NSSet * whitelistedBundleIDs;                                                   //@synthesize whitelistedBundleIDs=_whitelistedBundleIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedSystemApplicationIdentifiers; 
+(id)sharedInstance;
+(id)activeRestrictionIdentifiers;
-(id)init;
-(BOOL)isOpenInRestrictionInEffect;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(NSNumber *)maximumRating;
-(BOOL)cleanRemovedSystemApplicationsList;
-(void)setRemovedSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(NSSet *)removedSystemApplicationIdentifiers;
-(BOOL)isAppExtensionRestricted:(id)arg1 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2 ;
-(void)_syncTrustedSignerIdenties;
-(void)handleMCEffectiveSettingsChanged;
-(void)clearAllValues;
-(id)_MCProfileConnection;
-(BOOL)isWhitelistEnabled;
-(id)_LSResolveIdentifiers:(id)arg1 ;
-(void)setWhitelistedBundleIDs:(NSSet *)arg1 ;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(void)setRestrictedBundleIDs:(NSSet *)arg1 ;
-(NSSet *)whitelistedBundleIDs;
-(id)calculateSetDifference:(id)arg1 and:(id)arg2 ;
-(NSSet *)restrictedBundleIDs;
-(BOOL)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2 ;
-(BOOL)isFeatureAllowed:(id)arg1 ;
-(id)_MCRestrictionManager;
-(id)blacklistedBundleID;
-(void)beginListeningForChanges;
-(void)scheduleSyncTrustedSignerIdenties;
-(BOOL)setApplication:(id)arg1 removed:(BOOL)arg2 ;
-(BOOL)isRatingAllowed:(id)arg1 ;
-(BOOL)isApplicationRestricted:(id)arg1 ;
-(BOOL)isAdTrackingEnabled;
-(BOOL)isLimitAdTrackingForced;
-(NSSet *)blacklistedBundleIDs;
-(BOOL)isSystemAppDeletionEnabled;
@end

