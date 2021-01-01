/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROClient : NSObject {

	NSLock* _lock;
	unsigned _identifier;
	unsigned _port;
	int _pid;
	CFArrayRef _queue;
	CFSetRef _callbackSet;

}
+(void)initialize;
+(id)addClientGetIdentifier:(unsigned*)arg1 token:(SCD_Struct_SC10)arg2 getPort:(unsigned*)arg3 ;
+(long long)removeClientWithPort:(unsigned)arg1 ;
+(BOOL)isClientTrustedWithPortToken:(SCD_Struct_SC10)arg1 ;
+(void)sendCallback:(id)arg1 ;
+(id)callbacksForClientIdentifier:(unsigned)arg1 ;
+(void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_lock;
-(void)_invalidate;
-(void)_unlock;
-(BOOL)_wantsCallback:(id)arg1 ;
-(void)_sendCallback:(id)arg1 ;
-(id)_dequeueCallbacks;
-(void)_registerCallbackWithKey:(int)arg1 ;
@end

