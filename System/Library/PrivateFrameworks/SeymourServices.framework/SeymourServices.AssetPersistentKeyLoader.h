/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@interface SeymourServices.AssetPersistentKeyLoader : NSObject <AVContentKeySessionDelegate> {

	 assetDataStore;
	 assetFileStore;
	 assetMediaStreamKeyProvider;
	 eventHub;
	 keyProvider;
	 tasks;
	 persistenceStore;
	 lock;
	 keyLoaderQueue;

}
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(BOOL)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3 ;
-(id)init;
@end

