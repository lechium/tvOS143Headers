/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMediaDestinationMessageHandler.h>

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;
@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler {

	id<HMDMediaDestinationsMessageHandlerDataSource> _dataSource;
	id<HMDMediaDestinationsMessageHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationsMessageHandlerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationsMessageHandlerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<HMDMediaDestinationsMessageHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationsMessageHandlerDelegate>)arg1 ;
-(id<HMDMediaDestinationsMessageHandlerDataSource>)dataSource;
-(void)setDataSource:(id<HMDMediaDestinationsMessageHandlerDataSource>)arg1 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(void)handleUpdatedDestination:(id)arg1 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg1 ;
@end

