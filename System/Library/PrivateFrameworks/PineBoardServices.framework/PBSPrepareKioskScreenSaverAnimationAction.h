/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@interface PBSPrepareKioskScreenSaverAnimationAction : BSAction

@property (nonatomic,readonly) long long animationDirection; 
-(void)sendResponse:(id)arg1 ;
-(long long)animationDirection;
-(id)initWithAnimationDirection:(long long)arg1 timeout:(double)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)initWithAnimationDirection:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
@end
