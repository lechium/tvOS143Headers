/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject {

	NSString* _applicationIdentifier;
	NSXPCConnection* _connection;
	TransparencyApplication* _application;

}

@property (retain) TransparencyApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) NSString * applicationIdentifier;                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(NSXPCConnection *)connection;
-(NSString *)applicationIdentifier;
-(TransparencyApplication *)application;
-(void)setApplication:(TransparencyApplication *)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(void)clearState:(/*^block*/id)arg1 ;
-(void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(/*^block*/id)arg6 ;
-(void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)resetRequestToPending:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)forceConfigUpdate:(/*^block*/id)arg1 ;
-(void)copyLogClientConfiguration:(/*^block*/id)arg1 ;
-(void)copyKeyStoreState:(/*^block*/id)arg1 ;
-(void)copyKeyStoreStateFromDisk:(/*^block*/id)arg1 ;
-(void)clearLogClientConfiguration:(/*^block*/id)arg1 ;
-(void)copyDataStoreStatistics:(/*^block*/id)arg1 ;
-(void)copyDaemonState:(/*^block*/id)arg1 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6 ;
-(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id*)arg6 ;
-(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id*)arg5 ;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id*)arg5 ;
-(void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(/*^block*/id)arg5 ;
-(void)forceApplicationKeysFetch:(/*^block*/id)arg1 ;
-(void)forceApplicationKeysDownload:(/*^block*/id)arg1 ;
-(void)forceApplicationConfig:(/*^block*/id)arg1 ;
-(void)copyApplicationState:(/*^block*/id)arg1 ;
-(void)forceDutyCycle:(/*^block*/id)arg1 ;
-(void)clearPublicKeyStoreState:(/*^block*/id)arg1 ;
-(void)copyApplicationTranscript:(/*^block*/id)arg1 ;
@end

