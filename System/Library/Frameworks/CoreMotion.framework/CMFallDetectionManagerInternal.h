/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/CMFallDetectionClientXPC.h>

@protocol OS_dispatch_queue, CMFallDetectionManagerInternalDelegate;
@class NSObject, CMFallDetectionClient, CMAnomalyEvent, NSString;

@interface CMFallDetectionManagerInternal : NSObject <CMFallDetectionClientXPC> {

	CLConnectionClient* _locationdConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _fallDetectionNotificationToken;
	CMFallDetectionClient* _fallDetectionClient;
	id<CMFallDetectionManagerInternalDelegate> _delegate;
	CMAnomalyEvent* _mostRecentEvent;
	/*^block*/id _newtonPromptHandler;

}

@property (nonatomic,copy) id newtonPromptHandler;                                                    //@synthesize newtonPromptHandler=_newtonPromptHandler - In the implementation block
@property (nonatomic,retain) CMAnomalyEvent * mostRecentEvent;                                        //@synthesize mostRecentEvent=_mostRecentEvent - In the implementation block
@property (assign,nonatomic,__weak) id<CMFallDetectionManagerInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL fallDetectionEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_responseDictionaryWithMessage:(shared_ptr<CLConnectionMessage>*)arg1 ;
-(id)init;
-(void)dealloc;
-(id<CMFallDetectionManagerInternalDelegate>)delegate;
-(void)setDelegate:(id<CMFallDetectionManagerInternalDelegate>)arg1 ;
-(void)_configureLocationClientIfNeeded;
-(void)_appDidBecomeActive:(id)arg1 ;
-(void)_handleAnomalyEventCompletedMessage:(shared_ptr<CLConnectionMessage>*)arg1 ;
-(void)_invalidateLocationClient;
-(void)_subscribeToCompletedFallEvents;
-(void)_fetchMostRecentFallEvent;
-(void)setMostRecentEvent:(CMAnomalyEvent *)arg1 ;
-(void)setNewtonPromptHandler:(id)arg1 ;
-(void)didHideFallDetectionPrompt;
-(void)didStartBackgroundSession;
-(BOOL)fallDetectionEnabled;
-(void)_requestTCCWithCompletion:(/*^block*/id)arg1 ;
-(void)_appDelegateDidFinishProcessingWithDuration:(double)arg1 ;
-(void)_requestNewtonPromptWithCompletion:(/*^block*/id)arg1 ;
-(CMAnomalyEvent *)mostRecentEvent;
-(id)newtonPromptHandler;
@end
