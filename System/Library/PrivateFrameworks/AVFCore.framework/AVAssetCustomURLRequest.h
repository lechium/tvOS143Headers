/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSURLSessionTaskMetrics;

@interface AVAssetCustomURLRequest : NSObject {

	unsigned long long _requestID;
	CFDictionaryRef _customURLRequest;
	CFDictionaryRef _customURLResponse;
	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,readonly) unsigned long long requestID;                 //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(id)requestWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
-(unsigned long long)requestID;
-(id)initWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(CFDictionaryRef)customURLRequest;
-(void)setCustomURLRequest:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)customURLResponse;
-(void)setCustomURLResponse:(CFDictionaryRef)arg1 ;
@end

