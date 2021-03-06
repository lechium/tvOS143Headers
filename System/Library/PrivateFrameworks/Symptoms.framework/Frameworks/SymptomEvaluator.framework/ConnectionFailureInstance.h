/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ConnectionFailureInstance : NSObject {

	double _flowStart;
	double _flowDuration;

}

@property (assign,nonatomic) double flowStart;                 //@synthesize flowStart=_flowStart - In the implementation block
@property (assign,nonatomic) double flowDuration;              //@synthesize flowDuration=_flowDuration - In the implementation block
-(id)description;
-(double)flowDuration;
-(double)flowStart;
-(void)setFlowStart:(double)arg1 ;
-(void)setFlowDuration:(double)arg1 ;
@end

