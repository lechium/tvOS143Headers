/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject {

	NSDictionary* _additionalPayload;
	NSURLRequest* _continuationRequest;

}

@property (nonatomic,copy) NSDictionary * additionalPayload;                //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,copy) NSURLRequest * continuationRequest;              //@synthesize continuationRequest=_continuationRequest - In the implementation block
-(void)setContinuationRequest:(NSURLRequest *)arg1 ;
-(void)setAdditionalPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalPayload;
-(NSURLRequest *)continuationRequest;
@end

