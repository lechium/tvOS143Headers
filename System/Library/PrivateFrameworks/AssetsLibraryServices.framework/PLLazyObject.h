/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLLazyObject : NSObject {

	BOOL _shouldRetryBlockOnNil;
	os_unfair_lock_s _lock;
	/*^block*/id _block;
	id _object;

}

@property (readonly) id objectValue; 
-(id)init;
-(id)initWithObject:(id)arg1 ;
-(void)invalidate;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(id)initWithRetriableBlock:(/*^block*/id)arg1 ;
-(id)initWithRetry:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)objectValue;
-(void)accessLazyObjectAtomically:(/*^block*/id)arg1 ;
@end

