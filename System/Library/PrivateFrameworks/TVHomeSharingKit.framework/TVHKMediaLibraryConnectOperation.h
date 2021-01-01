/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVHKMediaLibrarySessionState, NSError, TVHKMediaServerIdentifier, TVHKMediaLibraryRequestSession, NSOperation;

@interface TVHKMediaLibraryConnectOperation : TVHKAsynchronousOperation {

	TVHKMediaLibrarySessionState* _sessionState;
	NSError* _error;
	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaLibraryRequestSession* _requestSession;
	NSOperation* _currentSubOperation;
	TVHKMediaLibrarySessionState* _sessionStateInternal;

}

@property (nonatomic,copy) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVHKMediaLibrarySessionState * sessionState;                      //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) TVHKMediaServerIdentifier * mediaServerIdentifier;                //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequestSession * requestSession;                  //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                                //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,retain) TVHKMediaLibrarySessionState * sessionStateInternal;              //@synthesize sessionStateInternal=_sessionStateInternal - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setSessionState:(TVHKMediaLibrarySessionState *)arg1 ;
-(void)executionDidBegin;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(void)_startSubOperation:(id)arg1 ;
-(void)setMediaServerIdentifier:(TVHKMediaServerIdentifier *)arg1 ;
-(void)setRequestSession:(TVHKMediaLibraryRequestSession *)arg1 ;
-(void)_startServerInfoOperation;
-(TVHKMediaLibrarySessionState *)sessionStateInternal;
-(void)_startLoginOperation;
-(void)_finishConnectAttemptWithSuccess:(BOOL)arg1 ;
-(void)_startFairPlaySAPSetupOperation;
-(void)_startHomeShareVerifyOperation;
-(void)_startDAAPDatabasesOperation;
-(void)_startMachineVerifyOperation;
-(void)_startDAAPBasePlaylistOperation;
-(void)_startDAAPRevisionOperation;
-(void)_startDPAPDatabasesOperation;
-(void)_startDPAPBasePlaylistOperation;
-(void)_startDPAPRevisionOperation;
-(id)initWithMediaServerIdentifier:(id)arg1 accessMode:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 requestSession:(id)arg4 ;
-(void)setSessionStateInternal:(TVHKMediaLibrarySessionState *)arg1 ;
@end

