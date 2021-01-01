/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface VCIDRSchedulerItem : NSObject {

	unsigned _framePosition;
	unsigned _budgetInCaptureFrames;
	unsigned _weightFactor;
	NSMutableArray* _streams;

}

@property (assign,nonatomic) unsigned framePosition;                      //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned weightFactor;                       //@synthesize weightFactor=_weightFactor - In the implementation block
@property (assign,nonatomic) unsigned budgetInCaptureFrames;              //@synthesize budgetInCaptureFrames=_budgetInCaptureFrames - In the implementation block
@property (nonatomic,readonly) NSArray * streams;                         //@synthesize streams=_streams - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)framePosition;
-(void)setFramePosition:(unsigned)arg1 ;
-(NSArray *)streams;
-(unsigned)weightFactor;
-(unsigned)budgetInCaptureFrames;
-(void)addStream:(id)arg1 ;
-(long long)compareBudget:(id)arg1 ;
-(void)setBudgetInCaptureFrames:(unsigned)arg1 ;
-(void)setWeightFactor:(unsigned)arg1 ;
@end
