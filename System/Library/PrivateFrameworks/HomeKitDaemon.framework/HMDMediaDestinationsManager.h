/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaDestinationsMessageHandlerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDMediaDestinationsMessageHandlerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationManager.h>

@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;
@class NSUUID, HMMediaDestination, HMDMediaDestinationMessageHandler, NSString;

@interface HMDMediaDestinationsManager : HMFObject <HMDMediaDestinationsMessageHandlerDelegate, HMFLogging, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationManager> {

	HMMediaDestination* _destination;
	HMDMediaDestinationMessageHandler* _messageHandler;
	id<HMDMediaDestinationsManagerDataSource> _dataSource;
	id<HMDMediaDestinationsManagerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationsManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationsManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMMediaDestination * destination;                                  //@synthesize destination=_destination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * identifier; 
@property (readonly) HMMediaDestination * committedDestination; 
@property (readonly) HMDMediaDestinationMessageHandler * messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
+(id)logCategory;
+(unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1 ;
+(id)deriveAudioGroupIdentifierFromDestinations:(id)arg1 ;
-(id<HMDMediaDestinationsManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationsManagerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)setDestination:(HMMediaDestination *)arg1 ;
-(HMMediaDestination *)destination;
-(HMDMediaDestinationMessageHandler *)messageHandler;
-(id<HMDMediaDestinationsManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMDMediaDestinationsManagerDataSource>)arg1 ;
-(id)privateDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(HMMediaDestination *)committedDestination;
-(void)configureWithHome:(id)arg1 ;
-(void)refreshDestination;
-(id)dataSourceAssociatedDestinationManagers;
-(void)stageAudioGroupIdentifier:(id)arg1 ;
-(id)deriveAudioDestination;
-(id)dataSourceAssociatedDestinations;
-(id)defaultDestination;
-(id)dataSourceTargetAccessory;
-(id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1 ;
-(id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1 ;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3 ;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3 ;
-(void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3 ;
-(id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2 ;
-(id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2 ;
-(BOOL)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2 ;
-(BOOL)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2 ;
-(id)dataSourceDestinationControllerWithIdentifier:(id)arg1 ;
@end

