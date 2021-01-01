/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSFileManager, NSMutableDictionary, NSMapTable;

@interface PLFileSystemVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	NSFileManager* _fileManager;
	NSMutableDictionary* _mountedVolumeURLsByUuid;
	NSMutableDictionary* _registeredFileSystemVolumesByUuid;
	NSMapTable* _mocsByVolume;

}
+(id)sharedFileSystemVolumeManager;
-(void)dealloc;
-(id)initSharedVolumeManager;
-(id)volumeForURL:(id)arg1 context:(id)arg2 ;
-(void)registerPLFileSystemVolume:(id)arg1 ;
-(void)unregisterPLFileSystemVolume:(id)arg1 ;
-(void)_updateOfflineStates;
-(void)_updateMountedVolumeURLs;
@end

