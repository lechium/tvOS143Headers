/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitoring>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(void)update;
-(NSDate *)lastUpdate;
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(id)shutdownHandler;
-(void)setShutdownHandler:(/*^block*/id)arg1;

@end

