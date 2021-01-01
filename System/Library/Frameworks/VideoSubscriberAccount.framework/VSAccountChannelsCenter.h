/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSURL, VSAccountStore, NSString, NSUndoManager;

@interface VSAccountChannelsCenter : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _fileURL;
	VSAccountStore* _accountStore;
	NSString* _fileName;
	NSURL* _directoryURL;
	/*^block*/id _identityProviderFetchOperationBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSURL * directoryURL;                                    //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,copy) id identityProviderFetchOperationBlock;                  //@synthesize identityProviderFetchOperationBlock=_identityProviderFetchOperationBlock - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)sharedCenter;
+(void)_startOperationAndWaitForCompletion:(id)arg1 ;
+(id)_accountChannelsWithProviderID:(id)arg1 ;
+(id)_defaultDirectoryURL;
+(id)_defaultFileName;
-(id)init;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(id)initWithAccountStore:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)directoryURL;
-(void)_saveAccountChannels:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchAccountChannelsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_savedAccountChannels;
-(void)_enqueueSaveAccountChannelsAndWait:(id)arg1 ;
-(void)_enqueueRemoveSavedAccountChannelsAndWait;
-(id)identityProviderFetchOperationBlock;
-(id)_removeSavedAccountChannels;
-(void)_snapshotPreviousChannels;
-(id)_saveAccountChannels:(id)arg1 ;
-(id)_storeIdentityProviderForAccount:(id)arg1 ;
-(id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2 ;
-(void)_removeSavedAccountChannelsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)setIdentityProviderFetchOperationBlock:(id)arg1 ;
@end

