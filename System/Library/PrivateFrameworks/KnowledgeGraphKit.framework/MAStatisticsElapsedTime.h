/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MAStatisticsElapsedTime : NSObject {

	double _elapsedTime;
	double _elapsedStart;
	long long _elapsedCounter;
	double _lastBeginTransactionTime;
	double _lastEndTransactionTime;

}
-(id)init;
-(void)dealloc;
-(void)end;
-(void)begin;
-(double)elapsedTime;
-(double)elapsedTimeSinceLastBeginTransaction;
-(double)elapsedTimeSinceLastEndTransaction;
-(BOOL)isTransactionPending;
@end

