/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock;

@interface ISDelegateProxy : NSObject {

	id _delegate;
	NSLock* _lock;
	BOOL _shouldMessageMainThread;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
-(void)sendInvocationToDelegate:(id)arg1 ;
@end

