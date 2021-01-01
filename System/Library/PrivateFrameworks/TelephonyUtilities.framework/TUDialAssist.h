/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@class CoreTelephonyClient, NSString;

@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	int _dialAssistUserSettingsChangedToken;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) int dialAssistUserSettingsChangedToken;                 //@synthesize dialAssistUserSettingsChangedToken=_dialAssistUserSettingsChangedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(int)dialAssistUserSettingsChangedToken;
@end

