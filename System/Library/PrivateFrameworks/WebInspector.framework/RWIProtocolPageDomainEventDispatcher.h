/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolPageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domContentEventFiredWithTimestamp:(double)arg1 ;
-(void)loadEventFiredWithTimestamp:(double)arg1 ;
-(void)frameNavigatedWithFrame:(id)arg1 ;
-(void)frameDetachedWithFrameId:(id)arg1 ;
-(void)frameStartedLoadingWithFrameId:(id)arg1 ;
-(void)frameStoppedLoadingWithFrameId:(id)arg1 ;
-(void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2 ;
-(void)frameClearedScheduledNavigationWithFrameId:(id)arg1 ;
@end
