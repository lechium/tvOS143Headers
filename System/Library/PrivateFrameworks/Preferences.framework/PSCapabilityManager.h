/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSNumber;

@interface PSCapabilityManager : NSObject {

	NSMutableDictionary* _overrides;
	NSNumber* _overrideForAllBoolValues;

}

@property (nonatomic,retain) NSMutableDictionary * overrides;                  //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,retain) NSNumber * overrideForAllBoolValues;              //@synthesize overrideForAllBoolValues=_overrideForAllBoolValues - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)capabilityBoolAnswer:(id)arg1 ;
-(void)setOverrides:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)overrides;
-(id)preferencesCapabilityAnswer:(id)arg1 ;
-(NSNumber *)overrideForAllBoolValues;
-(id)capabilityAnswer:(id)arg1 ;
-(id)supportsDisplayZoomCapability;
-(id)applicationDisplayIdentifiers;
-(id)supportsRaiseToWakeCapability;
-(id)supportsAutoWhiteBalanceCapability;
-(id)supportsNightShiftCapability;
-(id)supportsInStoreDemoModeCapability;
-(id)supportsInEDUModeCapability;
-(id)supportsPSTTYCapability;
-(id)supportsPSDeveloperSettingsCapability;
-(id)supportsWalletApplePayCapability;
-(id)supportsPSCellularDataPlanCapability;
-(id)supportsPSPencilCapability;
-(id)supportsPSExposureNotificationsCapability;
-(id)supportsPSHomeScreenPhoneCapability;
-(id)supportsPSTrackpadOnlyCapability;
-(id)supportsPSTrackpadAndMouseCapability;
-(id)supportsListeningExperienceCapbility;
-(id)supportsLightningAdapterCapability;
-(id)supportsPictureInPictureCapability;
-(void)setOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOverrideForAllBoolValues:(NSNumber *)arg1 ;
-(void)resetOverrides;
-(BOOL)hasCapabilities:(id)arg1 ;
@end

