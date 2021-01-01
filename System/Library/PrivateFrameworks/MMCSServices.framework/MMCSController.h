/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MMCSServices/MMCSServices-Structs.h>
@class NSTimer, NSMutableDictionary, NSRecursiveLock;

@interface MMCSController : NSObject {

	long long _connectionBehavior;
	id _powerAssertion;
	NSTimer* _powerAssertionTimer;
	mmcs_engineRef _engine;
	CFURLRef _chunkStoreURL;
	unsigned long long _currentItemID;
	NSMutableDictionary* _requestIDToBlockMap;
	NSMutableDictionary* _requestIDToTransfersMap;
	NSMutableDictionary* _requestIDToRemainingTransfersMap;
	NSMutableDictionary* _transferToRequestIDsMap;
	NSMutableDictionary* _transfers;
	NSMutableDictionary* _transferIDToContextMap;
	NSRecursiveLock* _transferIDContextMapLock;

}

@property (readonly) NSMutableDictionary * transfers;                           //@synthesize transfers=_transfers - In the implementation block
@property (readonly) NSMutableDictionary * transferIDToContextMap;              //@synthesize transferIDToContextMap=_transferIDToContextMap - In the implementation block
@property (retain) NSRecursiveLock * transferIDContextMapLock;                  //@synthesize transferIDContextMapLock=_transferIDContextMapLock - In the implementation block
@property (assign) long long connectionBehavior;                                //@synthesize connectionBehavior=_connectionBehavior - In the implementation block
@property (readonly) BOOL isActive; 
+(void)preMMCSWarm:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)_releasePowerAssertion;
-(void)_cancelRequest:(id)arg1 ;
-(NSMutableDictionary *)transfers;
-(mmcs_engineRef)_engine;
-(void)_invalidatePowerAssertionTimer;
-(void)_releasePowerAssertionAndSimulateCrash;
-(void)_unregisterPowerAssertion;
-(void)_addPreauthorizationOptions:(id)arg1 forFiles:(id)arg2 ;
-(long long)connectionBehavior;
-(void)_MMCSRegisterItems:(mmcs_engineRef)arg1 requestorContext:(void*)arg2 requestOptions:(id)arg3 completionCallback:(/*function pointer*/void*)arg4 ;
-(id)_registeredTransferForGUID:(id)arg1 ;
-(void)_handleRegistrationForMMCSPutFile:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_registerPowerAssertionIfNeeded;
-(void)_schedulePowerAssertionTimer;
-(id)_optionsForFiles:(id)arg1 sourceAppID:(id)arg2 ;
-(void)addRequestorContext:(id)arg1 transferID:(id)arg2 ;
-(void)_registerTransfers:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_registerFiles:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_unregisterTransfers:(id)arg1 ;
-(BOOL)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 sourceAppID:(id)arg4 token:(id)arg5 error:(id*)arg6 ;
-(void)_setScheduledTransfers:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 token:(id)arg6 error:(id*)arg7 ;
-(id)_MMCSICloudRequestHeadersCopy:(CFStringRef)arg1 ;
-(void)_processCompletedItem:(id)arg1 error:(id)arg2 ;
-(id)_registeredTransferForItemID:(unsigned long long)arg1 ;
-(void)registerFilesForDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)registerFilesForUpload:(id)arg1 withPreauthentication:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)unregisterFiles:(id)arg1 ;
-(void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 sourceAppID:(id)arg4 authToken:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 authToken:(id)arg6 preauthenticate:(BOOL)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)removeRequestorContext:(id)arg1 transferID:(id)arg2 ;
-(void)cancelPutRequestID:(id)arg1 ;
-(id)parseContentHeaderAsDictionary:(id)arg1 treatValuesAsArrays:(BOOL)arg2 ;
-(id)getContentHeadersAsString;
-(void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4 ;
-(void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4 ;
-(void)_putItemCompleted:(id)arg1 error:(id)arg2 ;
-(void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_itemCompleted:(id)arg1 ;
-(void)setConnectionBehavior:(long long)arg1 ;
-(NSMutableDictionary *)transferIDToContextMap;
-(NSRecursiveLock *)transferIDContextMapLock;
-(void)setTransferIDContextMapLock:(NSRecursiveLock *)arg1 ;
@end

