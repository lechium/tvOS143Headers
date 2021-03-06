/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@class Protocol;

@interface MSVWeakProxy : NSProxy {

	id _object;
	Protocol* _protocol;

}

@property (nonatomic,__weak,readonly) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)proxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)object;
-(Protocol *)protocol;
@end

