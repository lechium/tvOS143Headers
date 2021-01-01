/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _watchdogBehavior;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	BOOL _runIndependently;

}

@property (assign,nonatomic) BOOL runIndependently;                                        //@synthesize runIndependently=_runIndependently - In the implementation block
@property (assign,nonatomic) long long watchdogBehavior;                                   //@synthesize watchdogBehavior=_watchdogBehavior - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(BOOL)runIndependently;
-(long long)watchdogBehavior;
-(void)setWatchdogBehavior:(long long)arg1 ;
-(void)setRunIndependently:(BOOL)arg1 ;
@end

