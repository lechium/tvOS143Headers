/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNSessionUpdateManager.h>

@class NSTimer;

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager {

	NSTimer* _delayTimer;

}
-(void)dealloc;
-(void)_handleDelayTimerWithUpdateRow:(id)arg1 ;
-(void)playETAUpdate:(id)arg1 ;
-(void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2 ;
-(void)resumeUpdateRequests;
@end

