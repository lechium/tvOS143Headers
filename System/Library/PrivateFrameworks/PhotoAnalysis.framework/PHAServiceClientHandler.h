/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>
#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PLPhotoAnalysisServiceProtocol.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore;
@class NSString, NSMapTable, NSMutableArray, NSObject, PFDispatchQueue, PHAManager, NSXPCConnection, PHAExecutive, NSLock;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAGraphRegistration, PLPhotoAnalysisServiceProtocol> {

	NSString* _clientBundleID;
	NSMapTable* _cancelableOperationsById;
	NSMutableArray* _clientHandlers;
	unsigned long long _graphLoadCount;
	NSObject*<OS_dispatch_group> _graphReady;
	PFDispatchQueue* _graphLoadQueue;
	PHAManager* _photoAnalysisManager;
	NSXPCConnection* _xpcConnection;
	PHAExecutive* _executive;
	NSObject*<OS_dispatch_semaphore> _invalidationSemaphore;
	id _serviceUnavailableHandler;
	NSLock* _sharedOperationLock;

}

@property (retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) PHAManager * photoAnalysisManager;                                   //@synthesize photoAnalysisManager=_photoAnalysisManager - In the implementation block
@property (__weak) PHAExecutive * executive;                                            //@synthesize executive=_executive - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> invalidationSemaphore;              //@synthesize invalidationSemaphore=_invalidationSemaphore - In the implementation block
@property (retain) id serviceUnavailableHandler;                                        //@synthesize serviceUnavailableHandler=_serviceUnavailableHandler - In the implementation block
@property (readonly) NSString * clientBundleID; 
@property (nonatomic,retain) NSLock * sharedOperationLock;                              //@synthesize sharedOperationLock=_sharedOperationLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)shutdown;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSString *)clientBundleID;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)loadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)unloadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleOperation:(id)arg1 ;
-(PHAManager *)photoAnalysisManager;
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateDidStop;
-(void)graphBecameReady:(id)arg1 forPHAGraphManager:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 executive:(id)arg2 ;
-(BOOL)isplphotosctl;
-(BOOL)isPhotos;
-(void)submitBlockToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(id)cancelableOperationsById;
-(id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2 ;
-(id)managerForInvocation:(id)arg1 contextInformation:(id)arg2 ;
-(id)contextInformationFromInvocation:(id)arg1 ;
-(id)libraryURLFromContextInformation:(id)arg1 ;
-(void)setPhotoAnalysisManager:(PHAManager *)arg1 ;
-(PHAExecutive *)executive;
-(void)setExecutive:(PHAExecutive *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)invalidationSemaphore;
-(void)setInvalidationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)serviceUnavailableHandler;
-(void)setServiceUnavailableHandler:(id)arg1 ;
-(NSLock *)sharedOperationLock;
-(void)setSharedOperationLock:(NSLock *)arg1 ;
@end

