/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/CATArbitratorProxy.h>

@class _CATArbitratorRegistrationEntry, NSString;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {

	id mResource;
	_CATArbitratorRegistrationEntry* mRegistration;
	BOOL _isExclusive;

}

@property (nonatomic,readonly) BOOL isExclusive;                    //@synthesize isExclusive=_isExclusive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isExclusive;
-(id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(BOOL)arg3 ;
@end

