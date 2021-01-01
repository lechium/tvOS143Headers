/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SCRActivityScheduler : NSObject <BSDescriptionProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitySchedulerWithTargetQueue:(id)arg1 ;
+(id)isolatedActivitySchedulerWithTargetQueue:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)submitActivity:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
@end

