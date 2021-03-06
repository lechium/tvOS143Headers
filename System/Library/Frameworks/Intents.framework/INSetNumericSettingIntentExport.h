/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSettingMetadata, INNumericSettingValue, INTemporalEventTrigger;


@protocol INSetNumericSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) INNumericSettingValue * numericValue; 
@property (assign,nonatomic) long long boundedValue; 
@property (assign,nonatomic) long long action; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(long long)action;
-(void)setAction:(long long)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INSettingMetadata *)settingMetadata;
-(INNumericSettingValue *)numericValue;
-(long long)boundedValue;
-(void)setBoundedValue:(long long)arg1;
-(void)setNumericValue:(id)arg1;
-(void)setSettingMetadata:(id)arg1;

@end

