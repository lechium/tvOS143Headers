/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface Score : NSObject {

	double _upPct;
	double _overallStay;
	double _handicapStay;
	double _epochs;
	double _lqmTransitionCount;
	double _connSuccesses;
	double _connAttempts;

}

@property (assign,nonatomic) double upPct;                           //@synthesize upPct=_upPct - In the implementation block
@property (assign,nonatomic) double overallStay;                     //@synthesize overallStay=_overallStay - In the implementation block
@property (assign,nonatomic) double handicapStay;                    //@synthesize handicapStay=_handicapStay - In the implementation block
@property (assign,nonatomic) double epochs;                          //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) double lqmTransitionCount;              //@synthesize lqmTransitionCount=_lqmTransitionCount - In the implementation block
@property (assign,nonatomic) double connSuccesses;                   //@synthesize connSuccesses=_connSuccesses - In the implementation block
@property (assign,nonatomic) double connAttempts;                    //@synthesize connAttempts=_connAttempts - In the implementation block
-(id)description;
-(double)epochs;
-(void)setConnSuccesses:(double)arg1 ;
-(double)connSuccesses;
-(void)setConnAttempts:(double)arg1 ;
-(double)connAttempts;
-(void)setEpochs:(double)arg1 ;
-(double)upPct;
-(double)overallStay;
-(double)handicapStay;
-(double)lqmTransitionCount;
-(void)setUpPct:(double)arg1 ;
-(void)setOverallStay:(double)arg1 ;
-(void)setHandicapStay:(double)arg1 ;
-(void)setLqmTransitionCount:(double)arg1 ;
@end

