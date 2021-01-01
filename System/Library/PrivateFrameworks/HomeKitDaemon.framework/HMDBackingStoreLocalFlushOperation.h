/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation {

	BOOL _clearCloud;
	HMDBackingStoreLocal* _store;
	/*^block*/id _resultHandler;

}

@property (nonatomic,retain) HMDBackingStoreLocal * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL clearCloud;                           //@synthesize clearCloud=_clearCloud - In the implementation block
-(void)main;
-(void)setStore:(HMDBackingStoreLocal *)arg1 ;
-(HMDBackingStoreLocal *)store;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithStore:(id)arg1 clearCloud:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)clearCloud;
-(void)setClearCloud:(BOOL)arg1 ;
@end

