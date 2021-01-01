/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSRemoteInternal.h>

@protocol PDSKVStore;
@interface PDSInternalDaemonListener : NSObject <PDSRemoteInternal> {

	id<PDSKVStore> _kvStore;

}

@property (nonatomic,retain) id<PDSKVStore> kvStore;              //@synthesize kvStore=_kvStore - In the implementation block
-(id<PDSKVStore>)kvStore;
-(void)setKvStore:(id<PDSKVStore>)arg1 ;
-(void)setStringValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setNumberValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDataValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stringRepresentationForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)kvStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKVStore:(id)arg1 ;
@end
