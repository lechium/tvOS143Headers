/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSURL* _volumeURL;

}
-(id)description;
-(void)dealloc;
-(id)initWithVolumeURL:(id)arg1 ;
-(void)addVolumeUnmountObserver:(id)arg1 ;
-(void)removeVolumeUnmountObserver:(id)arg1 ;
@end

