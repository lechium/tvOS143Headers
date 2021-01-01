/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject {

	NSString* _name;
	NSDate* _loadRecordsDetectedSince;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * loadRecordsDetectedSince;              //@synthesize loadRecordsDetectedSince=_loadRecordsDetectedSince - In the implementation block
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(NSDate *)loadRecordsDetectedSince;
-(void)setLoadRecordsDetectedSince:(NSDate *)arg1 ;
@end
