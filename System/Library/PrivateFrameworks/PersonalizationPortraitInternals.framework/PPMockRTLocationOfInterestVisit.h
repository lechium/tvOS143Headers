/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PPMockRTLocationOfInterestVisit : NSObject {

	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (nonatomic,retain) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;               //@synthesize exitDate=_exitDate - In the implementation block
+(id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 ;
-(NSDate *)entryDate;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
@end

