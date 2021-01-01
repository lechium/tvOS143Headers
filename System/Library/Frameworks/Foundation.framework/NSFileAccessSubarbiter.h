/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileAccessClientLocalArbiterInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSFileAccessArbiter, NSString;

@interface NSFileAccessSubarbiter : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSFileAccessArbiter* _realSubarbiter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(id)initWithQueue:(id)arg1 listener:(id)arg2 ;
-(void)stopArbitrating;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
@end

