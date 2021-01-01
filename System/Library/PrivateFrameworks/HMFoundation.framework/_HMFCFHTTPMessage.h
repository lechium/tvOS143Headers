/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSData;

@interface _HMFCFHTTPMessage : HMFObject {

	CFHTTPMessageRef _message;

}

@property (nonatomic,readonly) CFHTTPMessageRef message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,copy) NSData * body; 
+(id)dateFormatter;
+(id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3 ;
+(id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)date;
-(id)contentType;
-(void)setContentType:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(CFHTTPMessageRef)message;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(long long)contentLength;
-(void)setContentLength:(long long)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(id)initWithMessageRef:(CFHTTPMessageRef)arg1 ;
-(id)valueForHeaderField:(id)arg1 ;
@end

