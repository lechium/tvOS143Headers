/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(id<_UIMotionEffectEventConsumer>)consumer;
-(id)currentEvent;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(BOOL)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(BOOL)wantsSynchronizedUpdates;
@end

