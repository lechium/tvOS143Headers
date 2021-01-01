/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKECGAvailabilityResult : NSObject {

	BOOL _advertiseDirectOnboarding;
	BOOL _advertiseDirectOnboardingEscapeHatch;
	BOOL _advertiseUpgrade;
	BOOL _advertiseUpgradeEscapeHatch;

}

@property (nonatomic,readonly) BOOL advertiseDirectOnboarding;                         //@synthesize advertiseDirectOnboarding=_advertiseDirectOnboarding - In the implementation block
@property (nonatomic,readonly) BOOL advertiseDirectOnboardingEscapeHatch;              //@synthesize advertiseDirectOnboardingEscapeHatch=_advertiseDirectOnboardingEscapeHatch - In the implementation block
@property (nonatomic,readonly) BOOL advertiseUpgrade;                                  //@synthesize advertiseUpgrade=_advertiseUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL advertiseUpgradeEscapeHatch;                       //@synthesize advertiseUpgradeEscapeHatch=_advertiseUpgradeEscapeHatch - In the implementation block
+(id)resultWithAdvertiseDirectOnboarding:(BOOL)arg1 advertiseDirectOnboardingSecondary:(BOOL)arg2 advertiseUpgrade:(BOOL)arg3 advertiseUpgradeSecondary:(BOOL)arg4 ;
+(id)resultWithNoAdvertisements;
-(id)initWithAdvertiseDirectOnboarding:(BOOL)arg1 advertiseDirectOnboardingSecondary:(BOOL)arg2 advertiseUpgrade:(BOOL)arg3 advertiseUpgradeSecondary:(BOOL)arg4 ;
-(BOOL)advertiseDirectOnboarding;
-(BOOL)advertiseDirectOnboardingEscapeHatch;
-(BOOL)advertiseUpgrade;
-(BOOL)advertiseUpgradeEscapeHatch;
@end

