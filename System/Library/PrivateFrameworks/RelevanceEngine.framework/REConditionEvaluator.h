/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RECondition;

@interface REConditionEvaluator : NSObject {

	unsigned long long _mode;
	RECondition* _condition;

}

@property (nonatomic,readonly) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) RECondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) BOOL needsPredictionSet; 
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
-(unsigned long long)mode;
-(BOOL)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(BOOL)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2 ;
-(BOOL)needsPredictionSet;
@end
