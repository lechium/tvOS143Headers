/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate> {

	/*^block*/id _animationDidStartBlock;
	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;               //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;                //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(id)arg1 ;
@end

