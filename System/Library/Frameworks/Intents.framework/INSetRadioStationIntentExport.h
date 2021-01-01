/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSString;


@protocol INSetRadioStationIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long radioType; 
@property (nonatomic,copy) NSNumber * frequency; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * channel; 
@property (nonatomic,copy) NSNumber * presetNumber; 
@required
-(id)init;
-(NSString *)channel;
-(void)setChannel:(id)arg1;
-(void)setFrequency:(id)arg1;
-(NSNumber *)frequency;
-(long long)radioType;
-(void)setRadioType:(long long)arg1;
-(NSString *)stationName;
-(void)setStationName:(id)arg1;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(id)arg1;

@end
