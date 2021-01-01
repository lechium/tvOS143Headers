/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>
#import <libobjc.A.dylib/AFRelinquishableAssertion.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, AFTwoArgumentSafetyBlock, NSUUID, AFAssertionContext, NSString;

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	AFTwoArgumentSafetyBlock* _relinquishmentHandler;
	NSUUID* _uuid;
	AFAssertionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) AFAssertionContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(AFAssertionContext *)context;
-(id)_xpcConnection;
-(NSUUID *)uuid;
-(id)initWithContext:(id)arg1 relinquishmentHandler:(/*^block*/id)arg2 ;
-(void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_acquireWithContext:(id)arg1 ;
-(void)_finalizeWithContext:(id)arg1 error:(id)arg2 ;
-(void)_relinquishWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_clearXPCConnection;
-(void)handleXPCConnectionInterrupted;
-(void)handleXPCConnectionInvalidated;
@end

