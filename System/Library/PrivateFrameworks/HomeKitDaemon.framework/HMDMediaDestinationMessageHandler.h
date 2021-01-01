/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAppleMediaAccessoryMessageHandler.h>

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;
@interface HMDMediaDestinationMessageHandler : HMDAppleMediaAccessoryMessageHandler {

	id<HMDMediaDestinationMessageHandlerDataSource> _dataSource;
	id<HMDMediaDestinationMessageHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationMessageHandlerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationMessageHandlerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id<HMDMediaDestinationMessageHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationMessageHandlerDelegate>)arg1 ;
-(id<HMDMediaDestinationMessageHandlerDataSource>)dataSource;
-(void)setDataSource:(id<HMDMediaDestinationMessageHandlerDataSource>)arg1 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(void)handleUpdatedDestination:(id)arg1 ;
-(void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(id)audioGroupIdentifierInMessage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id*)arg2 ;
-(void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1 ;
-(void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1 ;
@end

