/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject {

	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
+(id)sharedInstance;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)evaluator;
-(BOOL)isMonitoring;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(BOOL)isNetworkUp;
-(void)registerNetworkMonitorLaunchEvent:(BOOL)arg1 ;
@end

