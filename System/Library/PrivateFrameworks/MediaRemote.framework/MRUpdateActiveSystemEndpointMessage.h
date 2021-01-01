/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRUpdateActiveSystemEndpointRequest;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage {

	MRUpdateActiveSystemEndpointRequest* _request;

}

@property (nonatomic,readonly) MRUpdateActiveSystemEndpointRequest * request;              //@synthesize request=_request - In the implementation block
-(unsigned long long)type;
-(MRUpdateActiveSystemEndpointRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
@end
