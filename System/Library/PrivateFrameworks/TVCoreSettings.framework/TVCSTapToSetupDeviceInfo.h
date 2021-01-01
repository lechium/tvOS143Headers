/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSLocale, NSTimeZone, TVCSTapToSetupHomeKitInfo, NSString, NSArray, NSData;

@interface TVCSTapToSetupDeviceInfo : NSObject {

	NSDictionary* _rawDeviceInfo;
	NSLocale* _locale;
	NSTimeZone* _timeZone;
	TVCSTapToSetupHomeKitInfo* _homeKitInfo;
	NSDictionary* _locationServicesAuthorizationInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * rawDeviceInfo;                                                               //@synthesize rawDeviceInfo=_rawDeviceInfo - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                                                             //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) TVCSTapToSetupHomeKitInfo * homeKitInfo;                                                           //@synthesize homeKitInfo=_homeKitInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * locationServicesAuthorizationInfo;                                                  //@synthesize locationServicesAuthorizationInfo=_locationServicesAuthorizationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) unsigned long long privacyFlowContentVersion; 
@property (getter=isDiagnosticSubmissionsAllowed,nonatomic,readonly) long long diagnosticSubmissionsAllowed; 
@property (getter=isAppAnalyticSubmissionsAllowed,nonatomic,readonly) long long appAnalyticSubmissionsAllowed; 
@property (getter=isLocationServicesEnabled,nonatomic,readonly) long long locationServicesEnabled; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * languageCodes; 
@property (nonatomic,readonly) NSString * region; 
@property (getter=isTimeZoneDeterminedAutomatically,nonatomic,readonly) long long timeZoneDeterminedAutomatically; 
@property (getter=isTimeDeterminedAutomatically,nonatomic,readonly) long long timeDeterminedAutomatically; 
@property (getter=isSiriEnabled,nonatomic,readonly) long long siriEnabled; 
@property (getter=isSiriDictationEnabled,nonatomic,readonly) long long siriDictationEnabled; 
@property (getter=isSiriDataSharingEnabled,nonatomic,readonly) long long siriDataSharingEnabled; 
@property (nonatomic,readonly) NSString * siriLanaguage; 
@property (nonatomic,readonly) NSData * videoSubscriberAccountData; 
+(id)new;
+(id)_stringArrayFromDictionary:(id)arg1 forKey:(id)arg2 ;
+(id)_mediaSystemLookupDictionaryFromMediaSystemDictionaries:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)languageCode;
-(NSString *)productType;
-(int)deviceClass;
-(NSString *)deviceName;
-(NSString *)buildVersion;
-(NSString *)region;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(long long)isLocationServicesEnabled;
-(long long)isSiriEnabled;
-(id)initWithRawDeviceInfo:(id)arg1 ;
-(NSDictionary *)rawDeviceInfo;
-(long long)_triStateForBoolWithKey:(id)arg1 ;
-(id)_stringArrayForKey:(id)arg1 ;
-(id)_homesFromHomeDictionaries:(id)arg1 ;
-(NSDictionary *)locationServicesAuthorizationInfo;
-(long long)isSiriDictationEnabled;
-(long long)isSiriDataSharingEnabled;
-(NSString *)siriLanaguage;
-(long long)isDiagnosticSubmissionsAllowed;
-(long long)isAppAnalyticSubmissionsAllowed;
-(id)_locationServicesAuthorizationLogString;
-(long long)isTimeZoneDeterminedAutomatically;
-(long long)isTimeDeterminedAutomatically;
-(unsigned long long)privacyFlowContentVersion;
-(NSArray *)languageCodes;
-(NSData *)videoSubscriberAccountData;
-(TVCSTapToSetupHomeKitInfo *)homeKitInfo;
-(id)_roomsFromRoomDictionaries:(id)arg1 mediaSystemLookupDictionary:(id)arg2 ;
-(id)_accessoriesFromAccessoryDictionaries:(id)arg1 ;
-(id)_homeTheaterSpeakersFromAccessories:(id)arg1 mediaSystemLookupDictionary:(id)arg2 ;
-(void)setHomeKitInfo:(TVCSTapToSetupHomeKitInfo *)arg1 ;
-(void)setLocationServicesAuthorizationInfo:(NSDictionary *)arg1 ;
@end
