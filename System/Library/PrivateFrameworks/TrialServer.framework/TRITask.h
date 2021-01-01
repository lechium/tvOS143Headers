/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSDate;


@protocol TRITask <NSObject,NSSecureCoding>
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@required
+(id)parseFromData:(id)arg1;
-(NSDate *)startTime;
-(void)setStartTime:(id)arg1;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(id)serialize;
-(NSString *)taskName;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
-(void)runEnqueueHandlerUsingContext:(id)arg1;
-(void)runDequeueHandlerUsingContext:(id)arg1;
-(id<TRITaskQueueStateProviding>)stateProvider;
-(void)setStateProvider:(id)arg1;

@end

