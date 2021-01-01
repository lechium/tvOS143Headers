/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSMutableDictionary, UIViewController;

@interface _VUIAppDocumentUpdateEventObserverContext : NSObject {

	NSSet* _eventDescriptors;
	NSMutableDictionary* _refreshTimerByEventDescriptor;
	/*^block*/id _refreshTimerFiredBlock;
	UIViewController* _viewController;

}

@property (nonatomic,copy) NSSet * eventDescriptors;                                           //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshTimerByEventDescriptor;              //@synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor - In the implementation block
@property (nonatomic,copy) id refreshTimerFiredBlock;                                          //@synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSSet *)eventDescriptors;
-(void)setEventDescriptors:(NSSet *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setRefreshTimerFiredBlock:(id)arg1 ;
-(void)_cancelAllRefreshTimers;
-(NSMutableDictionary *)refreshTimerByEventDescriptor;
-(id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1 ;
-(void)_startRefreshTimer:(id)arg1 ;
-(void)_cancelRefreshTimers:(id)arg1 ;
-(void)setRefreshTimerByEventDescriptor:(NSMutableDictionary *)arg1 ;
-(id)refreshTimerFiredBlock;
-(void)_cancelRefreshTimer:(id)arg1 ;
@end

