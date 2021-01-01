/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DNDSSyncServiceDelegate.h>
#import <libobjc.A.dylib/DNDSAssertionSyncManager.h>

@protocol OS_dispatch_queue, DNDSSyncService, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;
@class NSObject, DNDSClientDetailsProvider, NSDate, NSString;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSAssertionSyncManager> {

	NSObject*<OS_dispatch_queue> _queue;
	id<DNDSSyncService> _syncService;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	NSDate* _lastReceivedStoreDate;
	NSDate* _lastSentStoreDate;
	id<DNDSAssertionSyncManagerDataSource> _dataSource;
	id<DNDSAssertionSyncManagerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(void)setDelegate:(id<DNDSAssertionSyncManagerDelegate>)arg1 ;
-(void)resume;
-(id<DNDSAssertionSyncManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSAssertionSyncManagerDataSource>)arg1 ;
-(void)_queue_sendStateSnapshotToPairedDevice:(id)arg1 force:(BOOL)arg2 ;
-(void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 ;
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4 ;
-(BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4 ;
-(void)updateForModeAssertionUpdateResult:(id)arg1 ;
-(id)initWithClientDetailsProvider:(id)arg1 syncService:(id)arg2 ;
@end

