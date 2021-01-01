/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MPMutableRadioIdentifiers <MPRadioIdentifiers>
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@required
-(long long)stationID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setStationHash:(id)arg1;
-(void)setStationStringID:(id)arg1;
-(void)setStationID:(long long)arg1;

@end

