/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) id handler; 
-(id)init;
-(void)dealloc;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
@end
