/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableURLRequest, NSMutableSet, NSURL, NSDictionary;

@interface CMSExtensionEndpointConfiguration : NSObject {

	NSMutableURLRequest* _request;
	NSMutableSet* _optionalMethods;
	NSURL* _endpointURL;
	NSDictionary* _groupHeaders;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSURL * endpointURL;                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupHeaders;               //@synthesize groupHeaders=_groupHeaders - In the implementation block
@property (nonatomic,readonly) NSDictionary * headers;                    //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableSet * optionalMethods;              //@synthesize optionalMethods=_optionalMethods - In the implementation block
-(id)description;
-(id)init;
-(NSMutableURLRequest *)request;
-(NSURL *)endpointURL;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(NSDictionary *)headers;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4 ;
-(NSDictionary *)groupHeaders;
-(NSMutableSet *)optionalMethods;
-(void)setOptionalMethods:(NSMutableSet *)arg1 ;
@end

