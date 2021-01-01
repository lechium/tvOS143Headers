/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, ICStoreRequestContext;

@interface _MPCMiniSINFEndpointInfo : NSObject {

	NSURL* _endpointURL;
	long long _maximumBatchSize;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) NSURL * endpointURL;                            //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,readonly) long long maximumBatchSize;                          //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(NSURL *)endpointURL;
-(ICStoreRequestContext *)requestContext;
-(long long)maximumBatchSize;
-(id)initWithEndpointURL:(id)arg1 maximumBatchSize:(long long)arg2 requestContext:(id)arg3 ;
@end
