/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKCPUUsageMonitor : _DKMonitor {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _lastUserTick;
	unsigned long long _lastIdleTick;
	unsigned long long _lastSysTick;
	unsigned long long _lastCPUUsageLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long lastUserTick;                   //@synthesize lastUserTick=_lastUserTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastIdleTick;                   //@synthesize lastIdleTick=_lastIdleTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastSysTick;                    //@synthesize lastSysTick=_lastSysTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastCPUUsageLevel;              //@synthesize lastCPUUsageLevel=_lastCPUUsageLevel - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)start;
-(void)stop;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)synchronouslyReflectCurrentValue;
-(void)saveState;
-(id)loadState;
-(void)getCPUTicksForUser:(unsigned long long*)arg1 system:(unsigned long long*)arg2 idle:(unsigned long long*)arg3 ;
-(unsigned long long)getCurrentCPUUsageLevel;
-(void)setCurrentCPUUsageLevel:(unsigned long long)arg1 ;
-(BOOL)updateCPUUsagePercentage:(unsigned long long*)arg1 ;
-(unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1 ;
-(unsigned long long)lastUserTick;
-(void)setLastUserTick:(unsigned long long)arg1 ;
-(unsigned long long)lastIdleTick;
-(void)setLastIdleTick:(unsigned long long)arg1 ;
-(unsigned long long)lastSysTick;
-(void)setLastSysTick:(unsigned long long)arg1 ;
-(unsigned long long)lastCPUUsageLevel;
-(void)setLastCPUUsageLevel:(unsigned long long)arg1 ;
@end

