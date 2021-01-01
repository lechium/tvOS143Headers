/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSApplicationUserQuitMonitorServerToClientInterface.h>

@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;
@class NSObject, BSServiceConnection, NSString;

@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;
	id<SBSApplicationUserQuitMonitorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)_connectionQueue_invalidate;
@end

