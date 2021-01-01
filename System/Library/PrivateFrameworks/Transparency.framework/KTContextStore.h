/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, TransparencyManagedDataStore, KTPublicKeyStore;

@interface KTContextStore : NSObject {

	NSMutableDictionary* _contexts;
	TransparencyManagedDataStore* _dataStore;
	KTPublicKeyStore* _keyStore;

}

@property (retain) KTPublicKeyStore * keyStore;                           //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSMutableDictionary * contexts;                        //@synthesize contexts=_contexts - In the implementation block
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(KTPublicKeyStore *)keyStore;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setKeyStore:(KTPublicKeyStore *)arg1 ;
-(void)forcedConfigure:(BOOL)arg1 logClient:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)storeContext:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createContextForApplication:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createContextForTLT:(id)arg1 logClient:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)configureWithClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)contextForApplication:(id)arg1 logClient:(id)arg2 fetchState:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configureWithClient:(id)arg1 force:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)logSharedMetrics;
-(void)runDutyCycleProcessingStepForActivity:(id)arg1 context:(id)arg2 logClient:(id)arg3 ;
-(void)verifyTLTConsistencyAndGarbageCollectSTHs:(id)arg1 ;
-(void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 ;
-(id)initWithDataStore:(id)arg1 keyStore:(id)arg2 ;
-(void)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 logClient:(id)arg6 error:(id*)arg7 ;
-(void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)verifyHeadInclusionDownload:(id)arg1 application:(id)arg2 logClient:(id)arg3 ;
-(void)verifyHeadConsistencyDownload:(id)arg1 application:(id)arg2 logClient:(id)arg3 ;
-(void)failHeadDownload:(id)arg1 application:(id)arg2 failure:(id)arg3 retry:(BOOL)arg4 logClient:(id)arg5 ;
-(void)verifySMTInclusionDownload:(id)arg1 application:(id)arg2 logClient:(id)arg3 ;
-(void)failSMTInclusionDownload:(id)arg1 application:(id)arg2 failure:(id)arg3 retry:(BOOL)arg4 logClient:(id)arg5 ;
-(void)verifyRequestDownload:(id)arg1 application:(id)arg2 logClient:(id)arg3 ;
-(void)failRequestDownload:(id)arg1 application:(id)arg2 failure:(id)arg3 retry:(BOOL)arg4 logClient:(id)arg5 ;
-(BOOL)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 ;
-(id)serializeTranscripts;
@end

