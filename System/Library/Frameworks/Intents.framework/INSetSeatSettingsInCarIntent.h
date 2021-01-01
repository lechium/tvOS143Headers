/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetSeatSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enableHeating; 
@property (nonatomic,copy,readonly) NSNumber * enableCooling; 
@property (nonatomic,copy,readonly) NSNumber * enableMassage; 
@property (nonatomic,readonly) long long seat; 
@property (nonatomic,copy,readonly) NSNumber * level; 
@property (nonatomic,readonly) long long relativeLevelSetting; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(NSNumber *)level;
-(id)_metadata;
-(void)setLevel:(NSNumber *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)carName;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 ;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(NSNumber *)arg1 ;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(NSNumber *)arg1 ;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(NSNumber *)arg1 ;
-(long long)seat;
-(void)setSeat:(long long)arg1 ;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1 ;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 carName:(id)arg7 ;
@end

