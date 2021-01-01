/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INQueryHealthSampleIntentExport.h>

@class NSArray, HKUnit, NSString;

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>

@property (nonatomic,readonly) long long objectType; 
@property (nonatomic,copy,readonly) NSArray * recordDates; 
@property (nonatomic,copy,readonly) HKUnit * unit; 
@property (nonatomic,readonly) long long questionType; 
@property (nonatomic,copy,readonly) NSArray * thresholdValues; 
@property (nonatomic,readonly) long long expectedResultType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(HKUnit *)unit;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1 ;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1 ;
-(NSArray *)recordDates;
-(void)setRecordDates:(NSArray *)arg1 ;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(NSArray *)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6 ;
@end

