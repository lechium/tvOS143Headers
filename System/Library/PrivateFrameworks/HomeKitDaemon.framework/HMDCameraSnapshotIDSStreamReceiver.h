/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamReceiverDelegate;
@class HMDSnapshotFile, IDSSession, NSObject, NSString;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {

	HMDSnapshotFile* _snapshotFile;
	IDSSession* _idsSession;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;

}

@property (nonatomic,retain) IDSSession * idsSession;                                                     //@synthesize idsSession=_idsSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDSnapshotFile * snapshotFile;                                            //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotIDSStreamReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraSnapshotIDSStreamReceiverDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(id)logIdentifier;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(void)_callFileReceived:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
@end

